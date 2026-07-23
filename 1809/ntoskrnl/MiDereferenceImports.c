/*
 * XREFs of MiDereferenceImports @ 0x14070F18C
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 * Callees:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiUnloadApproved @ 0x14070F214 (MiUnloadApproved.c)
 */

void __fastcall MiDereferenceImports(unsigned __int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 != 1 )
  {
    v1 = (_QWORD *)a1;
    if ( a1 != -2LL )
    {
      if ( (a1 & 1) != 0 )
      {
        v5[0] = 1LL;
        v5[1] = a1 & 0xFFFFFFFFFFFFFFFEuLL;
        v1 = v5;
      }
      v2 = 0;
      if ( *v1 )
      {
        v3 = 0LL;
        do
        {
          v4 = v1[v3 + 1];
          if ( !v4 )
            break;
          if ( (unsigned int)MiUnloadApproved(v1[v3 + 1]) == 1 )
            MiUnloadSystemImage(v4, -1);
          v3 = ++v2;
        }
        while ( (unsigned __int64)v2 < *v1 );
      }
    }
  }
}
