/*
 * XREFs of ?Initialize@DISPLAYSTATECHECKER@@QEAAJIHPEBD@Z @ 0x1C025F6E0
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C025FE70 (DxgkCheckDisplayState.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1C003BEB4 (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::Initialize(DISPLAYSTATECHECKER *this, char a2, int a3, const char *a4)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))DISPLAYSTATECHECKER::CollectDisplayAdaptersCallback,
    (__int64)this,
    4);
  *((_DWORD *)this + 117) = 0;
  *((_BYTE *)this + 468) = a2;
  *((_DWORD *)this + 117) ^= (*((_DWORD *)this + 117) ^ (a3 << 8)) & 0x100;
  if ( a4 )
    RtlStringCchCopyA((char *)this + 472, 0xFuLL, a4);
  else
    *((_BYTE *)this + 472) = 0;
  *((_DWORD *)this + 117) ^= (*((_DWORD *)this + 117) ^ (*((_DWORD *)this + 116) << 9)) & 0x1FE00;
  return 0LL;
}
