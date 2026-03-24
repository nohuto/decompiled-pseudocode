/*
 * XREFs of MouseClassReadCopyData @ 0x1C00036D8
 * Callers:
 *     MouseClassHandleRead @ 0x1C00029A0 (MouseClassHandleRead.c)
 *     MouseClassServiceCallback @ 0x1C0003AA0 (MouseClassServiceCallback.c)
 * Callees:
 *     memmove @ 0x1C0001780 (memmove.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0005338 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C0005460 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqLL @ 0x1C00055B4 (WPP_RECORDER_SF_qqLL.c)
 *     WPP_RECORDER_SF_qqLqq @ 0x1C0005950 (WPP_RECORDER_SF_qqLqq.c)
 *     WPP_RECORDER_SF_qqqql @ 0x1C0005EB0 (WPP_RECORDER_SF_qqqql.c)
 */

__int64 __fastcall MouseClassReadCopyData(__int64 a1, _QWORD *a2, int a3, int a4)
{
  __int64 v6; // r13
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  unsigned int v9; // edx
  unsigned int v10; // r12d
  char *v11; // r14
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  char *v15; // r14
  unsigned int v16; // edx
  bool v17; // zf
  __int64 result; // rax

  ++*(_DWORD *)(a1 + 168);
  v6 = a2[23];
  v7 = *(_DWORD *)(v6 + 8);
  v8 = 24 * *(_DWORD *)(a1 + 84);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqLL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, a3, a4);
  if ( v8 >= v7 )
    v8 = v7;
  v9 = *(_DWORD *)(a1 + 104) + *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 120);
  v10 = v8;
  if ( v8 >= v9 )
    v10 = *(_DWORD *)(a1 + 104) + *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 120);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_qqL(WPP_GLOBAL_Control->DeviceExtension, v9, 3, 39);
  }
  v11 = (char *)a2[3];
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqLqq(WPP_GLOBAL_Control->DeviceExtension, v9, a3, 40);
  memmove(v11, *(const void **)(a1 + 120), v10);
  v15 = &v11[v10];
  if ( v8 == v10 )
  {
    *(_QWORD *)(a1 + 120) += v10;
  }
  else
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLqq(WPP_GLOBAL_Control->DeviceExtension, v12, v13, 41);
    memmove(v15, *(const void **)(a1 + 104), v8 - v10);
    *(_QWORD *)(a1 + 120) = v8 - v10 + *(_QWORD *)(a1 + 104);
  }
  v16 = v8 / 0x18;
  v17 = *(_DWORD *)(a1 + 84) == v8 / 0x18;
  *(_DWORD *)(a1 + 84) -= v8 / 0x18;
  if ( v17 )
  {
    LOBYTE(v16) = 3;
    WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, v16, 3, 42);
    *(_BYTE *)(a1 + 66) = 1;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqqql(WPP_GLOBAL_Control->DeviceExtension, v16, v13, v14);
  a2[7] = v8;
  result = 0LL;
  *(_DWORD *)(v6 + 8) = v8;
  return result;
}
