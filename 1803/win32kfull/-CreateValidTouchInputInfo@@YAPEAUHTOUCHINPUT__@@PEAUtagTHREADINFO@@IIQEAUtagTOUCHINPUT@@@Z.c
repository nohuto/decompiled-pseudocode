/*
 * XREFs of ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01A86AC
 * Callers:
 *     ForwardTouchMessage @ 0x1C01A9078 (ForwardTouchMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01A8354 (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ?CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z @ 0x1C01A8480 (-CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z.c)
 */

struct HTOUCHINPUT__ *__fastcall CreateValidTouchInputInfo(
        struct tagTHREADINFO *a1,
        __int64 a2,
        unsigned int a3,
        struct tagTOUCHINPUT *const a4)
{
  struct HTOUCHINPUT__ *v5; // rdi
  unsigned __int64 v7; // rdx
  NTSTATUS v9; // ecx
  ULONG v10; // eax
  __int64 v11; // rdx
  __int64 v13; // r8
  int v14; // eax
  struct tagTOUCHINPUT *v15; // rbx
  unsigned int v16[2]; // [rsp+30h] [rbp-30h] BYREF
  struct tagTOUCHINPUT *v17; // [rsp+38h] [rbp-28h]
  __int64 v18; // [rsp+40h] [rbp-20h]
  _DWORD v19[2]; // [rsp+48h] [rbp-18h] BYREF
  struct tagTOUCHINPUT *v20; // [rsp+50h] [rbp-10h]
  unsigned int v21; // [rsp+88h] [rbp+28h] BYREF

  v5 = 0LL;
  *(_QWORD *)v16 = 0LL;
  v21 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v7 = 48LL * a3;
  if ( v7 > 0xFFFFFFFF )
  {
    v9 = -1073741675;
LABEL_3:
    v10 = RtlNtStatusToDosError(v9);
    UserSetLastError(v10, v11);
    return 0LL;
  }
  v16[1] = 0;
  v16[0] = a3;
  v17 = (struct tagTOUCHINPUT *)Win32AllocPool((unsigned int)v7, 1952871253LL);
  if ( !v17 )
  {
    v9 = -1073741801;
    goto LABEL_3;
  }
  v19[0] = a3;
  v19[1] = a3;
  v20 = a4;
  v14 = CopyTouchInputListSorted((const struct tagTOUCHINPUTLIST *)v19, (struct tagTOUCHINPUTLIST *)v16, v13, &v21);
  v15 = v17;
  if ( v14 )
    v5 = AllocTouchInputInfo(a1, v16[1], v17, v21);
  if ( v15 )
    Win32FreePool(v15);
  return v5;
}
