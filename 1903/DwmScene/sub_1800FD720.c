/*
 * XREFs of sub_1800FD720 @ 0x1800FD720
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800ADBF0 @ 0x1800ADBF0 (sub_1800ADBF0.c)
 *     sub_1800BC8B8 @ 0x1800BC8B8 (sub_1800BC8B8.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800FD720(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int32 *v10; // [rsp+30h] [rbp-20h]
  __int128 v11; // [rsp+38h] [rbp-18h] BYREF

  v11 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v11 = *a2;
  *((_QWORD *)&v11 + 1) = v4;
  sub_1800ADBF0(a1, &v11);
  v9 = 0LL;
  v10 = 0LL;
  sub_1800BC8B8(&v9, a2);
  v5 = v9;
  *(_DWORD *)(v9 + 1800) = *(_DWORD *)(a1 + 1800);
  *(_DWORD *)(v5 + 1804) = *(_DWORD *)(a1 + 1804);
  *(_DWORD *)(v5 + 1808) = *(_DWORD *)(a1 + 1808);
  *(_DWORD *)(v5 + 1812) = *(_DWORD *)(a1 + 1812);
  *(_DWORD *)(v5 + 1816) = *(_DWORD *)(a1 + 1816);
  *(_DWORD *)(v5 + 1820) = *(_DWORD *)(a1 + 1820);
  *(_DWORD *)(v5 + 1824) = *(_DWORD *)(a1 + 1824);
  *(_DWORD *)(v5 + 1828) = *(_DWORD *)(a1 + 1828);
  *(_DWORD *)(v5 + 1832) = *(_DWORD *)(a1 + 1832);
  *(_DWORD *)(v5 + 1836) = *(_DWORD *)(a1 + 1836);
  *(_DWORD *)(v5 + 1840) = *(_DWORD *)(a1 + 1840);
  *(_DWORD *)(v5 + 1844) = *(_DWORD *)(a1 + 1844);
  *(_DWORD *)(v5 + 1848) = *(_DWORD *)(a1 + 1848);
  *(_DWORD *)(v5 + 1852) = *(_DWORD *)(a1 + 1852);
  *(_DWORD *)(v5 + 1856) = *(_DWORD *)(a1 + 1856);
  *(_DWORD *)(v5 + 1860) = *(_DWORD *)(a1 + 1860);
  *(_BYTE *)(v5 + 1864) = *(_BYTE *)(a1 + 1864);
  *(_DWORD *)(v5 + 1868) = *(_DWORD *)(a1 + 1868);
  *(_DWORD *)(v5 + 1872) = *(_DWORD *)(a1 + 1872);
  *(_DWORD *)(v5 + 1876) = *(_DWORD *)(a1 + 1876);
  *(_DWORD *)(v5 + 1880) = *(_DWORD *)(a1 + 1880);
  *(_DWORD *)(v5 + 1884) = *(_DWORD *)(a1 + 1884);
  *(_DWORD *)(v5 + 1888) = *(_DWORD *)(a1 + 1888);
  *(_DWORD *)(v5 + 1892) = *(_DWORD *)(a1 + 1892);
  *(_BYTE *)(v5 + 1896) = *(_BYTE *)(a1 + 1896);
  *(_BYTE *)(v5 + 1897) = *(_BYTE *)(a1 + 1897);
  *(_BYTE *)(v5 + 1898) = *(_BYTE *)(a1 + 1898);
  result = *(unsigned int *)(a1 + 1900);
  *(_DWORD *)(v5 + 1900) = result;
  if ( v10 )
  {
    result = (unsigned int)_InterlockedDecrement(v10 + 2);
    if ( !(_DWORD)result )
    {
      v7 = v10;
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v8 = (volatile signed __int32 *)a2[1];
  if ( v8 )
  {
    result = (unsigned int)_InterlockedDecrement(v8 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
