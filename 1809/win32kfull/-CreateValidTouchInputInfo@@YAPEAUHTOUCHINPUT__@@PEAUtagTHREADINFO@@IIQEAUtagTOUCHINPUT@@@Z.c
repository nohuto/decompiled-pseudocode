/*
 * XREFs of ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01CA7F8
 * Callers:
 *     ForwardTouchMessage @ 0x1C01CB5FC (ForwardTouchMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01CA480 (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ?CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z @ 0x1C01CA5B8 (-CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // r8
  int v16; // eax
  struct tagTOUCHINPUT *v17; // rbx
  unsigned int v18[2]; // [rsp+30h] [rbp-30h] BYREF
  struct tagTOUCHINPUT *v19; // [rsp+38h] [rbp-28h]
  __int64 v20; // [rsp+40h] [rbp-20h]
  _DWORD v21[2]; // [rsp+48h] [rbp-18h] BYREF
  struct tagTOUCHINPUT *v22; // [rsp+50h] [rbp-10h]
  unsigned int v23; // [rsp+88h] [rbp+28h] BYREF

  v5 = 0LL;
  *(_QWORD *)v18 = 0LL;
  v23 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v7 = 48LL * a3;
  if ( v7 > 0xFFFFFFFF )
  {
    v9 = -1073741675;
LABEL_3:
    v10 = RtlNtStatusToDosError(v9);
    UserSetLastError(v10, v11, v12, v13);
    return 0LL;
  }
  v18[1] = 0;
  v18[0] = a3;
  v19 = (struct tagTOUCHINPUT *)Win32AllocPool((unsigned int)v7, 1952871253LL);
  if ( !v19 )
  {
    v9 = -1073741801;
    goto LABEL_3;
  }
  v21[0] = a3;
  v21[1] = a3;
  v22 = a4;
  v16 = CopyTouchInputListSorted((const struct tagTOUCHINPUTLIST *)v21, (struct tagTOUCHINPUTLIST *)v18, v15, &v23);
  v17 = v19;
  if ( v16 )
    v5 = AllocTouchInputInfo(a1, v18[1], v19, v23);
  if ( v17 )
    Win32FreePool(v17);
  return v5;
}
