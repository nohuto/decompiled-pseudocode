/*
 * XREFs of MiDereferenceImports @ 0x1407474EC
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiResolveImageReferences @ 0x140710C00 (MiResolveImageReferences.c)
 * Callees:
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiUnloadApproved @ 0x140747580 (MiUnloadApproved.c)
 */

void __fastcall MiDereferenceImports(__int64 *a1)
{
  __int64 v1; // rax
  __int64 *v2; // rbx
  unsigned int i; // edi
  __int64 v4; // rsi
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  if ( a1 != (__int64 *)1 )
  {
    v1 = 0LL;
    v2 = a1;
    v5 = 0LL;
    v6 = 0LL;
    if ( a1 != (__int64 *)-2LL )
    {
      if ( ((unsigned __int8)a1 & 1) != 0 )
      {
        v5 = 1LL;
        v6 = (unsigned __int64)a1 & 0xFFFFFFFFFFFFFFFEuLL;
        v2 = &v5;
      }
      for ( i = 0; i < (unsigned __int64)*v2; v1 = ++i )
      {
        v4 = v2[v1 + 1];
        if ( !v4 )
          break;
        if ( (unsigned int)MiUnloadApproved(v2[v1 + 1]) == 1 )
          MiUnloadSystemImage(v4, -1);
      }
    }
  }
}
