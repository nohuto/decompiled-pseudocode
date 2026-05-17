/*
 * XREFs of LdrInitializeEnclave @ 0x1800CD500
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B2F8 @ 0x18001B2F8 (sub_18001B2F8.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     ZwInitializeEnclave @ 0x18009E5F0 (ZwInitializeEnclave.c)
 *     ZwTerminateEnclave @ 0x18009FDD0 (ZwTerminateEnclave.c)
 *     sub_1800A05D0 @ 0x1800A05D0 (sub_1800A05D0.c)
 *     sub_1800CDB44 @ 0x1800CDB44 (sub_1800CDB44.c)
 *     sub_1800D070C @ 0x1800D070C (sub_1800D070C.c)
 */

__int64 __fastcall LdrInitializeEnclave(__int64 a1, unsigned __int64 a2)
{
  int v2; // edi
  __int64 *v3; // rax
  __int64 *v4; // rbx
  bool v5; // zf

  v2 = 0;
  v3 = sub_18001B2F8(a2, 1);
  v4 = v3;
  if ( v3 && *((_DWORD *)v3 + 14) == 16 && *((_DWORD *)v3 + 16) )
  {
    if ( *((_DWORD *)v3 + 16) != 1 )
    {
      v2 = -1073741502;
      goto LABEL_12;
    }
  }
  else
  {
    v2 = ZwInitializeEnclave();
    if ( v2 < 0 )
      goto LABEL_12;
  }
  if ( !v4 )
    return (unsigned int)v2;
  v5 = *((_DWORD *)v4 + 14) == 16;
  *((_DWORD *)v4 + 16) = 1;
  if ( v5 )
  {
    v2 = sub_1800A05D0();
    if ( v2 < 0 )
      ZwTerminateEnclave();
    else
      *((_DWORD *)v4 + 16) = 2;
  }
LABEL_12:
  if ( v4 )
  {
    if ( *((_DWORD *)v4 + 14) == 16 )
      sub_1800D070C((unsigned int)v2);
    RtlLeaveCriticalSection((__int64)(v4 + 2));
    sub_1800CDB44(v4);
  }
  return (unsigned int)v2;
}
