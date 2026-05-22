/*
 * XREFs of ?GetDeviceInfoForDeviceId@DWMInputRouter@@UEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800C3430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::GetDeviceInfoForDeviceId(DWMInputRouter *this, int a2, struct DeviceInfo **a3)
{
  unsigned __int8 *v3; // r10
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 *v10; // rdx
  __int64 v11; // r8
  __int64 *i; // rax
  __int64 v13; // rcx
  struct DeviceInfo *v14; // rcx
  __int64 result; // rax
  int v16; // [rsp+10h] [rbp+10h] BYREF

  v16 = a2;
  v3 = (unsigned __int8 *)&v16;
  v6 = 0xCBF29CE484222325uLL;
  v7 = 4LL;
  do
  {
    v8 = *v3++;
    v6 = 0x100000001B3LL * (v8 ^ v6);
    --v7;
  }
  while ( v7 );
  v9 = *((_QWORD *)this + 27);
  v10 = (__int64 *)*((_QWORD *)this + 25);
  v11 = 2 * (v6 & *((_QWORD *)this + 30));
  for ( i = *(__int64 **)(v9 + 16 * (v6 & *((_QWORD *)this + 30))); ; i = (__int64 *)*i )
  {
    v13 = *(__int64 **)(v9 + 8 * v11) == v10 ? (__int64)v10 : **(_QWORD **)(v9 + 8 * v11 + 8);
    if ( i == (__int64 *)v13 )
      break;
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_11;
  }
  i = v10;
LABEL_11:
  if ( i == v10 )
    return 2147500037LL;
  v14 = (struct DeviceInfo *)i[3];
  result = 0LL;
  *a3 = v14;
  return result;
}
