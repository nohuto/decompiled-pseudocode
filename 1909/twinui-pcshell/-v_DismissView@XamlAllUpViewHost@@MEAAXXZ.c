/*
 * XREFs of ?v_DismissView@XamlAllUpViewHost@@MEAAXXZ @ 0x1802F5880
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802D24BC (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 */

void __fastcall XamlAllUpViewHost::v_DismissView(XamlAllUpViewHost *this)
{
  __abi_winrt_ptr_assign((__int64 *)this + 25, 0LL);
  XamlAllUpViewHost::DestroyFrames((MonitorFrame ***)this);
}
