/*
 * XREFs of ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01DE0D8
 * Callers:
 *     ForwardTouchMessage @ 0x1C01DF03C (ForwardTouchMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01DDD70 (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ?CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z @ 0x1C01DDE90 (-CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z.c)
 */

struct HTOUCHINPUT__ *__fastcall CreateValidTouchInputInfo(
        struct tagTHREADINFO *a1,
        __int64 a2,
        unsigned int a3,
        struct tagTOUCHINPUT *const a4)
{
  struct HTOUCHINPUT__ *v4; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  NTSTATUS v10; // ecx
  int v11; // eax
  struct tagTOUCHINPUT *v12; // rbx
  ULONG v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-2Ch]
  struct tagTOUCHINPUT *v20[2]; // [rsp+38h] [rbp-28h]
  _DWORD v21[2]; // [rsp+48h] [rbp-18h] BYREF
  struct tagTOUCHINPUT *v22; // [rsp+50h] [rbp-10h]
  __int64 v23; // [rsp+58h] [rbp-8h]
  unsigned int v24; // [rsp+88h] [rbp+28h] BYREF

  v4 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v8 = 48LL * a3;
  *(_OWORD *)v20 = 0LL;
  if ( v8 > 0xFFFFFFFF )
  {
    v10 = -1073741675;
    goto LABEL_10;
  }
  v19 = 0;
  v18 = a3;
  v20[0] = (struct tagTOUCHINPUT *)Win32AllocPool((unsigned int)v8, 1952871253LL);
  if ( !v20[0] )
  {
    v10 = -1073741801;
LABEL_10:
    v14 = RtlNtStatusToDosError(v10);
    UserSetLastError(v14, v15, v16, v17);
    return 0LL;
  }
  v21[0] = a3;
  v21[1] = a3;
  v22 = a4;
  v11 = CopyTouchInputListSorted((const struct tagTOUCHINPUTLIST *)v21, (struct tagTOUCHINPUTLIST *)&v18, v9, &v24);
  v12 = v20[0];
  if ( v11 )
    v4 = AllocTouchInputInfo(a1, v19, v20[0], v24);
  if ( v12 )
    Win32FreePool(v12);
  return v4;
}
