/*
 * XREFs of RhpCaptureSnapshots @ 0x1800800C4
 * Callers:
 *     ReportHangInternal2 @ 0x18007FEAC (ReportHangInternal2.c)
 *     ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x180080628 (-ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x180042A80 (RtlQueryResourcePolicy.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

int __fastcall RhpCaptureSnapshots(_QWORD *a1, _QWORD *a2, int *a3, int a4, int *a5)
{
  __int64 v8; // rdx
  int *v9; // rdi
  int result; // eax
  __int64 i; // rcx
  int *v12; // rdi
  void *v13; // rax
  void *v14; // rdx
  int v15; // eax
  void *v16; // rcx
  int v17; // edi
  void *ProcessHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+30h] [rbp-18h] BYREF
  int v21; // [rsp+68h] [rbp+20h] BYREF

  v21 = a4;
  memset_0(a1, 0, 0x80uLL);
  v9 = a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  result = -1;
  for ( i = 16LL; i; --i )
    *v9++ = -1;
  v12 = a5;
  if ( *a5 )
  {
    result = RtlQueryResourcePolicy(0, v8, (__int64)&v21);
    if ( result < 0 || v21 > 10 )
    {
      v13 = (void *)*v12;
      ClientId.UniqueThread = 0LL;
      ClientId.UniqueProcess = v13;
      result = NtOpenProcess(&ProcessHandle, 0x4D0u, (POBJECT_ATTRIBUTES)&ObjectAttributes, &ClientId);
      *a3 = result;
      if ( result >= 0 )
      {
        v14 = ProcessHandle;
        *a1 = 0LL;
        v19 = 0LL;
        v15 = PssNtCaptureSnapshot(&v19, v14, 3690994175LL, 1048607LL);
        v16 = ProcessHandle;
        v17 = v15;
        *a3 = v15;
        result = NtClose(v16);
        if ( v17 >= 0 )
        {
          result = v19;
          *a1 = v19;
          *(_BYTE *)a2 = 8;
        }
      }
    }
    else
    {
      *a3 = -1073741801;
    }
  }
  return result;
}
