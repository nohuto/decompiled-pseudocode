/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x180002AB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckRegistryKey @ 0x180003260 (RtlCheckRegistryKey.c)
 *     sub_180003474 @ 0x180003474 (sub_180003474.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall RtlCheckPortableOperatingSystem(bool *a1)
{
  int v1; // ebx
  _QWORD v4[15]; // [rsp+30h] [rbp-78h] BYREF
  int v5; // [rsp+B8h] [rbp+10h] BYREF

  v1 = 0;
  v5 = 0;
  if ( (int)RtlCheckRegistryKey(2LL, L"MiniNT") >= 0 )
    goto LABEL_6;
  memset(v4, 0, 0x70uLL);
  v4[2] = L"PortableOperatingSystem";
  LODWORD(v4[1]) = 292;
  v4[3] = &v5;
  LODWORD(v4[4]) = 0x4000000;
  v1 = sub_180003474(2LL, 0LL, v4, 0LL, 0LL, 1);
  if ( v1 == -1073741772 )
    v1 = -1073741275;
  if ( v1 >= 0 )
LABEL_6:
    *a1 = v5 != 0;
  return (unsigned int)v1;
}
