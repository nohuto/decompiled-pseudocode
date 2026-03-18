/*
 * XREFs of ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C001A6B8
 * Callers:
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0017930 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0019A3C (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0019E38 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall GetRealOwner(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  bool i; // zf

  v1 = *((_QWORD *)a1 + 15);
  v2 = *((_QWORD *)a1 + 13);
  for ( i = a1 == (struct tagWND *)v1; !i; i = v1 == v2 )
  {
    a1 = (struct tagWND *)v1;
    if ( !v1 )
      break;
    v1 = *(_QWORD *)(v1 + 104);
  }
  return a1;
}
