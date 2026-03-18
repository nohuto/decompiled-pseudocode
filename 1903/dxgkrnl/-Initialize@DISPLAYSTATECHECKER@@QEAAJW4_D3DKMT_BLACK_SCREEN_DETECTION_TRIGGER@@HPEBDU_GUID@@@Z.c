/*
 * XREFs of ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1C0295F24
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C0296AB0 (DxgkCheckDisplayState.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1C0049D4C (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::Initialize(__int64 a1, __int64 a2, __int16 a3, const char *a4, _OWORD *a5)
{
  struct DXGGLOBAL *Global; // rax

  *(_DWORD *)(a1 + 1812) = (unsigned __int8)a2;
  *(_DWORD *)(a1 + 1812) ^= ((unsigned __int8)a2 ^ (unsigned __int16)(a3 << 8)) & 0x100;
  *(_OWORD *)(a1 + 1832) = *a5;
  if ( a4 )
    RtlStringCchCopyA((char *)(a1 + 1816), a2, a4);
  else
    *(_BYTE *)(a1 + 1816) = 0;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64)DISPLAYSTATECHECKER::CollectDisplayAdaptersCallback,
    a1,
    4);
  *(_DWORD *)(a1 + 1812) ^= (*(_DWORD *)(a1 + 1812) ^ (*(_DWORD *)(a1 + 1808) << 9)) & 0x1FE00;
  return 0LL;
}
