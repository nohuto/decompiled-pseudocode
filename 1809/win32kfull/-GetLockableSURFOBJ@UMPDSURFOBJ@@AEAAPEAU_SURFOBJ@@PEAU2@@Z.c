/*
 * XREFs of ?GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C015FE30
 * Callers:
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C008F224 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?IsSurfaceLockable@@YAHPEAU_SURFOBJ@@PEAPEAUDHPDEV__@@@Z @ 0x1C015FFE4 (-IsSurfaceLockable@@YAHPEAU_SURFOBJ@@PEAPEAUDHPDEV__@@@Z.c)
 */

struct _SURFOBJ *__fastcall UMPDSURFOBJ::GetLockableSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2)
{
  SURFOBJ *v2; // rdi
  int v4; // [rsp+30h] [rbp-A8h] BYREF
  int v5; // [rsp+34h] [rbp-A4h] BYREF
  int v6; // [rsp+38h] [rbp-A0h] BYREF
  HSURF hsurf; // [rsp+40h] [rbp-98h]
  LONG *p_lDelta; // [rsp+48h] [rbp-90h]
  __int64 v9; // [rsp+50h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-78h] BYREF
  int *v11; // [rsp+80h] [rbp-58h]
  int v12; // [rsp+88h] [rbp-50h]
  int v13; // [rsp+8Ch] [rbp-4Ch]
  __int64 *v14; // [rsp+90h] [rbp-48h]
  int v15; // [rsp+98h] [rbp-40h]
  int v16; // [rsp+9Ch] [rbp-3Ch]
  int *v17; // [rsp+A0h] [rbp-38h]
  int v18; // [rsp+A8h] [rbp-30h]
  int v19; // [rsp+ACh] [rbp-2Ch]
  int *v20; // [rsp+B0h] [rbp-28h]
  int v21; // [rsp+B8h] [rbp-20h]
  int v22; // [rsp+BCh] [rbp-1Ch]

  hsurf = 0LL;
  if ( a2 )
  {
    p_lDelta = &a2[-1].lDelta;
    if ( a2[-1].lDelta == 1431130959 )
      hsurf = (HSURF)*((_QWORD *)p_lDelta + 1);
  }
  if ( hsurf )
    v2 = EngLockSurface(hsurf);
  else
    v2 = 0LL;
  if ( v2 )
  {
    if ( !(unsigned int)IsSurfaceLockable(v2, 0LL) )
    {
      EngUnlockSurface(v2);
      v2 = 0LL;
      if ( hProvider > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
        {
          v4 = 75782;
          v11 = &v4;
          v12 = 4;
          v13 = 0;
          v9 = 0x1000000LL;
          v14 = &v9;
          v15 = 8;
          v16 = 0;
          v5 = 1;
          v17 = &v5;
          v18 = 4;
          v19 = 0;
          v6 = 0;
          v20 = &v6;
          v21 = 4;
          v22 = 0;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D707D, 0LL, 0LL, 6u, &pData);
        }
      }
    }
  }
  return v2;
}
