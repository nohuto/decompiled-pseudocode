/*
 * XREFs of ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1C013AAF0
 * Callers:
 *     DxgDetermineBootImageMode @ 0x1C0155D5C (DxgDetermineBootImageMode.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

char __fastcall DxgkSetBootAnimationRelayState(__int64 a1)
{
  int v1; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  char v8; // bl
  bool v10; // zf
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1;
  Global = DXGGLOBAL::GetGlobal(a1);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGGLOBAL *)((char *)Global + 1272), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v5 = *((_DWORD *)DXGGLOBAL::GetGlobal(v3) + 315);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
LABEL_5:
          v8 = 0;
          goto LABEL_6;
        }
        v10 = v1 == 4;
      }
      else
      {
        v10 = v1 == 3;
      }
    }
    else
    {
      v10 = v1 == 2;
    }
    if ( !v10 )
      goto LABEL_5;
  }
  else if ( ((v1 - 1) & 0xFFFFFFFD) != 0 )
  {
    goto LABEL_5;
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal(v4) + 315) = v1;
  v8 = 1;
LABEL_6:
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return v8;
}
