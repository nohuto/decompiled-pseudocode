/*
 * XREFs of RtlQueueWorkItem @ 0x18002F7D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_18002F180 @ 0x18002F180 (sub_18002F180.c)
 *     sub_18002F270 @ 0x18002F270 (sub_18002F270.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x18002F760 (LdrAddRefDll.c)
 *     sub_18002FD98 @ 0x18002FD98 (sub_18002FD98.c)
 *     sub_180030D7C @ 0x180030D7C (sub_180030D7C.c)
 *     sub_180030DFC @ 0x180030DFC (sub_180030DFC.c)
 *     sub_1800310E4 @ 0x1800310E4 (sub_1800310E4.c)
 *     sub_1800318A8 @ 0x1800318A8 (sub_1800318A8.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlQueryInformationActivationContext @ 0x1800376A0 (RtlQueryInformationActivationContext.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     sub_18010F1C4 @ 0x18010F1C4 (sub_18010F1C4.c)
 */

NTSTATUS __cdecl RtlQueueWorkItem(WORKERCALLBACKFUNC Function, PVOID Context, ULONG Flags)
{
  char v3; // r14
  NTSTATUS v6; // edi
  HANDLE *Heap; // rax
  HANDLE *v8; // rbx
  NTSTATUS v9; // eax
  unsigned __int64 *v10; // r12
  __int64 *v11; // rsi
  int v12; // eax
  char *v13; // r8
  char *v14; // r9
  PVOID v15; // rdx
  __int64 v16; // rcx
  _ACTIVATION_CONTEXT *v18; // rcx
  HANDLE v19; // rcx
  char v20; // [rsp+40h] [rbp-C8h]
  char v21; // [rsp+41h] [rbp-C7h]
  char v22; // [rsp+42h] [rbp-C6h]
  char v23; // [rsp+43h] [rbp-C5h]
  int v24; // [rsp+44h] [rbp-C4h]
  HANDLE *BaseAddress; // [rsp+48h] [rbp-C0h]
  PACTIVATION_CONTEXT ActivationContext; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h]
  int v28; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-A0h]
  __int64 v30; // [rsp+70h] [rbp-98h]
  __int64 v31; // [rsp+78h] [rbp-90h]
  __int128 v32; // [rsp+80h] [rbp-88h]
  __int64 v33; // [rsp+90h] [rbp-78h]
  int v34; // [rsp+98h] [rbp-70h]
  int v35; // [rsp+9Ch] [rbp-6Ch]
  int v36; // [rsp+A0h] [rbp-68h]
  PVOID DllHandle[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-48h]
  struct _TEB *v39; // [rsp+C8h] [rbp-40h]
  struct _TEB *v40; // [rsp+D0h] [rbp-38h]
  struct _TEB *v41; // [rsp+D8h] [rbp-30h]
  HANDLE v42; // [rsp+128h] [rbp+20h] BYREF

  v3 = Flags;
  ActivationContext = 0LL;
  v27 = 0LL;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v21 = 0;
  v42 = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  v6 = sub_180030D7C(&v42);
  v24 = v6;
  if ( v6 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    Heap = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
    v8 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      v6 = sub_180030DFC(Heap + 5);
      v24 = v6;
      if ( v6 >= 0 )
      {
        v23 = 1;
        v39 = NtCurrentTeb();
        BaseAddress[12] = v39->SubProcessTag;
        v40 = NtCurrentTeb();
        v8 = BaseAddress;
        *(GUID *)(BaseAddress + 13) = v40->ActivityId;
        v9 = RtlQueryInformationActivationContext(
               1u,
               0LL,
               0LL,
               ActivationContextBasicInformation,
               &ActivationContext,
               0x10uLL,
               0LL);
        v6 = v9;
        v24 = v9;
        if ( v9 >= 0 )
        {
LABEL_6:
          if ( (v27 & 1) != 0 )
          {
            RtlReleaseActivationContext(ActivationContext);
            ActivationContext = (PACTIVATION_CONTEXT)-1LL;
          }
          BaseAddress[9] = ActivationContext;
          v20 = 1;
          *((_DWORD *)BaseAddress + 22) = 2;
          v10 = (unsigned __int64 *)(BaseAddress + 7);
          BaseAddress[7] = Function;
          BaseAddress[8] = Context;
          v11 = (__int64 *)(BaseAddress + 4);
          BaseAddress[4] = 0LL;
          v28 = 3;
          v29 = 0LL;
          v30 = 0LL;
          v31 = 0LL;
          v32 = 0LL;
          v33 = 0LL;
          v34 = 0;
          v35 = 1;
          v36 = 72;
          v12 = 0;
          if ( (v3 & 0xC0) != 0 )
            v12 = 2;
          v34 = v12;
          *BaseAddress = &off_180118310;
          *((_DWORD *)BaseAddress + 2) = 0;
          v6 = sub_18002FD98(*v11, BaseAddress, &v28);
          v24 = v6;
          if ( v6 >= 0 )
          {
            v21 = 1;
            if ( *v10 < *((_QWORD *)&xmmword_18017A4E0 + 1)
              || *v10 >= *((_QWORD *)&xmmword_18017A4E0 + 1) + (unsigned __int64)(unsigned int)qword_18017A4F0 )
            {
              sub_18001E620(*v10, (signed __int64)DllHandle, v13, v14);
            }
            else
            {
              *(_OWORD *)DllHandle = xmmword_18017A4E0;
              v38 = qword_18017A4F0;
            }
            v15 = DllHandle[1];
            BaseAddress[10] = DllHandle[1];
            if ( v15 )
            {
              LdrAddRefDll(0, v15);
              v22 = 1;
              if ( RtlGetCurrentServiceSessionId() )
              {
                v16 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
                v8 = BaseAddress;
              }
              else
              {
                v16 = 2147353478LL;
              }
              if ( *(_BYTE *)v16 )
              {
                v41 = NtCurrentTeb();
                v8 = BaseAddress;
                sub_18010F1C4(
                  *v11,
                  (_DWORD)BaseAddress,
                  *v10,
                  (unsigned int)BaseAddress[8],
                  (__int64)v41->SubProcessTag);
              }
              sub_1800318A8(v8, *v11, 1LL, &v28);
              if ( !_InterlockedDecrement((volatile signed __int32 *)BaseAddress + 22) )
                sub_18002F180((__int64)BaseAddress, *v11);
              v8 = 0LL;
              BaseAddress = 0LL;
              v6 = 0;
              v24 = 0;
            }
          }
          goto LABEL_28;
        }
        if ( v9 == -1072365557 )
        {
          BaseAddress[9] = (HANDLE)-1LL;
          goto LABEL_6;
        }
      }
    }
    else
    {
      v6 = -1073741801;
      v24 = -1073741801;
    }
  }
LABEL_28:
  if ( v8 )
  {
    if ( v20 )
    {
      v18 = (_ACTIVATION_CONTEXT *)v8[9];
      if ( v18 != (_ACTIVATION_CONTEXT *)-1LL )
        RtlReleaseActivationContext(v18);
    }
    if ( v21 )
      sub_18002F270((volatile signed __int32 *)v8[4], (__int64)&v28);
    if ( v22 )
      LdrUnloadDll(v8[10]);
    if ( v23 )
    {
      v19 = v8[5];
      if ( v19 )
        ZwClose(v19);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v6 = v24;
  }
  sub_1800310E4(v42);
  return v6;
}
