/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800C1290
 * Callers:
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x18006A12C (--1GazeHidDevice@@UEAA@XZ.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@@Z @ 0x180049BC0 (-_Erase@-$_Tree@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@V-$allocator@U-$p.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::~_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>(
        void **a1)
{
  _QWORD *v2; // rax
  void **v3; // rsi
  void **v4; // rdi

  v2 = *a1;
  v3 = (void **)*((_QWORD *)*a1 + 1);
  v4 = v3;
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Erase(
        (__int64)a1,
        v4[2]);
      v4 = (void **)*v4;
      operator delete(v3, (const struct std::nothrow_t *)0x28);
      v3 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
    v2 = *a1;
  }
  v2[1] = v2;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 2) = *a1;
  a1[1] = 0LL;
  operator delete(*a1, (const struct std::nothrow_t *)0x28);
}
