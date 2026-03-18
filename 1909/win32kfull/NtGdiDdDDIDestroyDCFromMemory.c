/*
 * XREFs of NtGdiDdDDIDestroyDCFromMemory @ 0x1C0102A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C004E634 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFEF8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFF44 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026A744 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C027362C (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall NtGdiDdDDIDestroyDCFromMemory(ULONG64 a1)
{
  int v1; // ebx
  DYNAMICMODECHANGESHARELOCK *v2; // rcx
  HSURF v4[3]; // [rsp+20h] [rbp-18h]
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  *(_OWORD *)v4 = *(_OWORD *)a1;
  if ( !*(_QWORD *)(a1 + 8) || !v4[0] )
    return 3221225485LL;
  v1 = -1073741811;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v5);
  v5 = 0LL;
  SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)&v5, v4[1]);
  if ( (unsigned int)SURFREF::bValid((SURFREF *)&v5) && *(_QWORD *)(v5 + 224) )
    v1 = 0;
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v5);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v2);
  if ( v1 >= 0 )
  {
    if ( !(unsigned int)bDeleteDCInternal(v4[0], 0LL, 0LL) )
      v1 = -1073741811;
    if ( v1 >= 0 && !(unsigned int)bDeleteSurface(v4[1]) )
      return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}
