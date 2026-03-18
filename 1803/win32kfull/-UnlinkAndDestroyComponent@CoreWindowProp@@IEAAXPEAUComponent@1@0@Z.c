/*
 * XREFs of ?UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z @ 0x1C01F9F08
 * Callers:
 *     ?Delete@CoreWindowProp@@UEAAXXZ @ 0x1C000E9E0 (-Delete@CoreWindowProp@@UEAAXXZ.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C01F9E50 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00354BC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

void __fastcall CoreWindowProp::UnlinkAndDestroyComponent(
        CoreWindowProp *this,
        struct CoreWindowProp::Component *a2,
        struct CoreWindowProp::Component *a3)
{
  __int64 v3; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = *(_QWORD *)a2;
    if ( a3 )
      *(_QWORD *)a3 = v3;
    else
      *((_QWORD *)this + 4) = v3;
    if ( CWindowProp::GetProp<CoreWindowProp>(*((_QWORD *)a2 + 1), &v6) )
      *(_QWORD *)(v6 + 24) = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
    --*((_DWORD *)this + 10);
    Win32FreePool(a2);
  }
}
