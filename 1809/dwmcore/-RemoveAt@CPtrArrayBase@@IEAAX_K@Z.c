/*
 * XREFs of ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x18005B4DC
 * Callers:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x18005B468 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 */

void __fastcall CPtrArrayBase::RemoveAt(CPtrArrayBase *this, unsigned __int64 a2)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rbx

  v3 = (unsigned __int64 *)(*(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (*(_QWORD *)this & 2) != 0 )
    v4 = *v3;
  else
    v4 = *(_QWORD *)this & 1LL;
  if ( a2 < v4 )
  {
    if ( v4 == 1 )
    {
      *(_QWORD *)this = 0LL;
    }
    else
    {
      v5 = v4 - 1;
      v6 = v3 + 2;
      if ( v5 == 1 )
      {
        v7 = v6[-a2 + 1];
        WPF::ProcessHeapImpl::Free(v3);
        *(_QWORD *)this = v7 | 1;
      }
      else
      {
        if ( a2 < v5 )
          memmove_0(&v6[a2], &v6[a2 + 1], 8 * (v5 - a2));
        *v3 = v5;
      }
    }
  }
}
