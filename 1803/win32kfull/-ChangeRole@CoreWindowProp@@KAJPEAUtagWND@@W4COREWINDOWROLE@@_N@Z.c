/*
 * XREFs of ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C000CA70
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0007EF4 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C01F9E50 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ??$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z @ 0x1C000CA0C (--$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C000E8F4 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00354BC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoreWindowProp::ChangeRole(struct tagWND *a1, int a2, unsigned __int8 a3)
{
  int v6; // ebx
  struct tagWND *v7; // rdx
  CWindowProp *v8; // rdi
  int v9; // esi
  CWindowProp *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  v6 = 0;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v11)
    || (v6 = CWindowProp::CreateWindowProp<CoreWindowProp>(&v11), v6 < 0) )
  {
    v8 = v11;
  }
  else
  {
    v7 = a1;
    v8 = v11;
    if ( !(unsigned int)CWindowProp::SetProp(v11, v7) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v8)(v8);
      v8 = 0LL;
      v6 = -1073741790;
    }
  }
  if ( v6 >= 0 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        *((_DWORD *)v8 + 4) = a3;
      }
      else
      {
        UserSetLastError(87LL);
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      *((_DWORD *)v8 + 5) = a3;
    }
  }
  return (unsigned int)v6;
}
