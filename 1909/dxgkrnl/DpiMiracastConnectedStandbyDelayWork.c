/*
 * XREFs of DpiMiracastConnectedStandbyDelayWork @ 0x1C02A4800
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0140D00 (DxgkMiracastStopAllMiracastSessions.c)
 */

void __fastcall DpiMiracastConnectedStandbyDelayWork(PDEVICE_OBJECT DeviceObject, PVOID Context, __int64 a3)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rdi
  struct _IO_WORKITEM *v5; // rbx
  _DWORD v6[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+28h] [rbp-48h]
  __int128 v8; // [rsp+30h] [rbp-40h]
  __int64 v9; // [rsp+40h] [rbp-30h]
  int v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+4Ch] [rbp-24h]
  int v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+54h] [rbp-1Ch]
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]

  v11 = 0;
  v10 = 0;
  v14 = 0;
  v15 = 0;
  v9 = 0LL;
  v8 = 0uLL;
  v6[0] = 6;
  v6[1] = 64;
  v7 = 0LL;
  v12 = 73;
  v13 = 1;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v6, 0x200000000LL, a3);
  v3 = qword_1C00A2BF8;
  do
  {
    v4 = v3;
    v5 = (struct _IO_WORKITEM *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
    v3 = _InterlockedCompareExchange64(&qword_1C00A2BF8, v3 & 0xFFFFFFFFFFFFFFFCuLL, v3);
  }
  while ( v4 != v3 );
  DxgkMiracastStopAllMiracastSessions(0, 0LL, 0x88u);
  if ( (v4 & 2) != 0 )
  {
    IoFreeWorkItem(v5);
    qword_1C00A2BF8 = 0LL;
  }
}
