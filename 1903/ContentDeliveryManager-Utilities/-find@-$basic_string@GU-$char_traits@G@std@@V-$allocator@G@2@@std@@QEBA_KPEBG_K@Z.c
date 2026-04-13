/*
 * XREFs of ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x18002F4F0
 * Callers:
 *     _anonymous_namespace_::StartsWith @ 0x180028910 (_anonymous_namespace_--StartsWith.c)
 *     ?GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x180047318 (-GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV-$basic_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::find(char *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r14
  char *v4; // r8
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r9
  char *v8; // rbp
  unsigned __int64 v9; // rax
  char *v10; // rdx
  unsigned __int64 v11; // rdi
  unsigned __int16 *v12; // rax
  unsigned __int16 v13; // r11
  int v14; // eax
  __int64 v15; // rcx

  v2 = *a2;
  v4 = a1;
  if ( !*a2 )
    return 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  if ( !v5 )
    return 0LL;
  v6 = *((_QWORD *)a1 + 2);
  if ( v6 && v5 <= v6 )
  {
    v7 = 1 - v5 + v6;
    if ( *((_QWORD *)a1 + 3) < 8uLL )
      v8 = a1;
    else
      v8 = *(char **)a1;
    while ( 1 )
    {
      if ( v7 )
      {
        v9 = v7;
        v10 = v8;
        while ( *(_WORD *)v10 != v2 )
        {
          v10 += 2;
          if ( !--v9 )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_14:
        v10 = 0LL;
      }
      if ( !v10 )
        break;
      v11 = v5;
      v12 = a2;
      while ( 1 )
      {
        v13 = *(unsigned __int16 *)((char *)v12 + v10 - (char *)a2);
        if ( v13 != *v12 )
          break;
        ++v12;
        if ( !--v11 )
        {
          v14 = 0;
          goto LABEL_20;
        }
      }
      v14 = v13 < *v12 ? -1 : 1;
LABEL_20:
      if ( !v14 )
      {
        if ( *((_QWORD *)v4 + 3) >= 8uLL )
          v4 = *(char **)v4;
        return (v10 - v4) >> 1;
      }
      v15 = v10 - v8;
      v8 = v10 + 2;
      v7 += -1 - (v15 >> 1);
    }
  }
  return -1LL;
}
