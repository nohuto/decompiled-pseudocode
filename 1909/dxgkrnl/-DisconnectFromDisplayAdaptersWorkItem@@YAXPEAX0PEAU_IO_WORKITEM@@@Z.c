/*
 * XREFs of ?DisconnectFromDisplayAdaptersWorkItem@@YAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C01F5640
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1C0246F54 (DxgkRequestSyncDisplaySwitchCallout.c)
 */

void __fastcall DisconnectFromDisplayAdaptersWorkItem(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r8
  int v7; // [rsp+30h] [rbp-49h] BYREF
  __int64 v8; // [rsp+34h] [rbp-45h]
  __int128 v9; // [rsp+3Ch] [rbp-3Dh]
  int v10; // [rsp+4Ch] [rbp-2Dh]
  struct _DXGK_WIN32K_PARAM_DATA v11; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v12[10]; // [rsp+70h] [rbp-9h] BYREF

  v4 = 0x100000000LL;
  if ( (_DWORD)Context != -1 )
    v4 = (unsigned int)Context;
  memset(v12, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v12[1]);
  v12[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v12[3]) = 62;
  LOBYTE(v12[6]) = -1;
  memset(&v11, 0, sizeof(v11));
  v11.SDCFlags = 2447;
  DxgkRequestSyncDisplaySwitchCallout(&v11, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v12, v4);
  v7 = 10;
  LOBYTE(v5) = 1;
  v8 = 0LL;
  v9 = 0uLL;
  v10 = 0;
  SMgrGdiCallout(&v7, v4, v5, &IncreaseAdapterUniquenessCallback, 0LL, 0LL);
  LOBYTE(v6) = 1;
  *(_QWORD *)((char *)&v9 + 4) = 1LL;
  SMgrGdiCallout(&v7, v4, v6, 0LL, 0LL, 0LL);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
