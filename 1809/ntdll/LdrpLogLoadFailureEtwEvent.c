/*
 * XREFs of LdrpLogLoadFailureEtwEvent @ 0x180071558
 * Callers:
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     LdrpProcessWork @ 0x180070CEC (LdrpProcessWork.c)
 * Callees:
 *     RtlGetThreadErrorMode @ 0x180071A50 (RtlGetThreadErrorMode.c)
 *     EtwEventWriteNoRegistration @ 0x180086E80 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtQueryInformationProcess @ 0x1800A0620 (NtQueryInformationProcess.c)
 */

void __fastcall LdrpLogLoadFailureEtwEvent(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        int a3,
        const EVENT_DESCRIPTOR *a4,
        char a5)
{
  NTSTATUS v8; // eax
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // eax
  ULONG v12; // r8d
  int v13; // eax
  int ProcessInformation; // [rsp+30h] [rbp-40h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+54h] [rbp-1Ch]
  __int64 v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+60h] [rbp-10h]
  int v21; // [rsp+64h] [rbp-Ch]
  int v22; // [rsp+A0h] [rbp+30h] BYREF

  v22 = a3;
  ProcessInformation = 0;
  if ( (LdrpPolicyBits & 0x20) != 0 )
  {
    if ( a5 )
      goto LABEL_8;
    if ( (RtlGetThreadErrorMode() & 0x10) == 0 )
    {
      v8 = NtQueryInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessDefaultHardErrorMode,
             &ProcessInformation,
             4u,
             0LL);
      v9 = ProcessInformation;
      if ( v8 < 0 )
        v9 = 5;
      ProcessInformation = v9;
      if ( (v9 & 5) != 0 )
      {
LABEL_8:
        v10 = *((_QWORD *)a1 + 1);
        v11 = *a1;
        UserData.Reserved = 0;
        v12 = 2;
        v18 = 0;
        v16 = v10;
        UserData.Ptr = (unsigned __int64)&v22;
        UserData.Size = 4;
        v17 = v11 + 2;
        if ( a2 )
        {
          v19 = *((_QWORD *)a2 + 1);
          v13 = *a2 + 2;
          v12 = 3;
          v21 = 0;
          v20 = v13;
        }
        EtwEventWriteNoRegistration(&UserLoaderGuid, a4, v12, &UserData);
      }
    }
  }
}
