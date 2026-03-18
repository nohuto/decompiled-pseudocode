/*
 * XREFs of ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C01248D0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0029230 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C007B690 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0017174 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0018F40 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001A16C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x1C0122710 (-vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z.c)
 */

void __fastcall vDuplicateAndScaleRegion(__int64 a1, REGION **a2, __int64 a3)
{
  REGION *v3; // rbx
  REGION *v6; // rcx
  REGION *v7; // rcx
  REGION *v8; // [rsp+20h] [rbp-20h] BYREF
  int v9; // [rsp+28h] [rbp-18h]
  REGION *v10; // [rsp+50h] [rbp+10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+18h] BYREF

  v3 = *a2;
  v10 = *a2;
  v11 = a1;
  if ( !a1 )
  {
    if ( !v3 )
      return;
    v7 = v3;
    goto LABEL_13;
  }
  if ( v3 )
    goto LABEL_16;
  v9 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v8, 0xD8u);
  v6 = v8;
  if ( v8 )
  {
    v3 = v8;
    v10 = v8;
    *a2 = v8;
  }
  if ( v9 == 1 )
    REGION::vDeleteREGION(v6);
  if ( v3 )
  {
LABEL_16:
    if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v10, (struct RGNOBJ *)&v11) )
    {
      RGNOBJ::vScale((__int64 *)&v10, a3);
      *a2 = v10;
      return;
    }
    v7 = v10;
LABEL_13:
    REGION::vDeleteREGION(v7);
    *a2 = 0LL;
  }
}
