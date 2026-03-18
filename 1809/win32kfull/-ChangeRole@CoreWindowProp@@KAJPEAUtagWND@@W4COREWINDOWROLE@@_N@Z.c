/*
 * XREFs of ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0122834
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0008B78 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C0222548 (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00723DC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00B3230 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ??$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z @ 0x1C0122934 (--$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoreWindowProp::ChangeRole(__int64 a1, int a2, unsigned __int8 a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  CWindowProp *v11; // rdi
  int v12; // esi
  CWindowProp *v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0LL;
  v6 = 0;
  if ( CWindowProp::GetProp<CoreWindowProp>(a1, (__int64 *)&v14)
    || (v6 = CWindowProp::CreateWindowProp<CoreWindowProp>(&v14), v6 < 0) )
  {
    v11 = v14;
  }
  else
  {
    v10 = a1;
    v11 = v14;
    if ( !(unsigned int)CWindowProp::SetProp(v14, v10) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v11)(v11);
      v11 = 0LL;
      v6 = -1073741790;
    }
  }
  if ( v6 >= 0 )
  {
    v12 = a2 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        *((_DWORD *)v11 + 4) = a3;
      }
      else
      {
        UserSetLastError(87LL, v7, v8, v9);
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      *((_DWORD *)v11 + 5) = a3;
    }
  }
  return (unsigned int)v6;
}
