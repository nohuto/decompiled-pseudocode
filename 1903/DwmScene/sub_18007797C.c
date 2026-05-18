/*
 * XREFs of sub_18007797C @ 0x18007797C
 * Callers:
 *     sub_18001017C @ 0x18001017C (sub_18001017C.c)
 *     sub_1800199B8 @ 0x1800199B8 (sub_1800199B8.c)
 *     sub_180067730 @ 0x180067730 (sub_180067730.c)
 *     sub_180068BD0 @ 0x180068BD0 (sub_180068BD0.c)
 *     sub_18007578C @ 0x18007578C (sub_18007578C.c)
 *     sub_1800772A0 @ 0x1800772A0 (sub_1800772A0.c)
 *     sub_180079060 @ 0x180079060 (sub_180079060.c)
 *     sub_18007B138 @ 0x18007B138 (sub_18007B138.c)
 *     sub_18007C144 @ 0x18007C144 (sub_18007C144.c)
 *     sub_1800B4384 @ 0x1800B4384 (sub_1800B4384.c)
 *     sub_1800BE0F8 @ 0x1800BE0F8 (sub_1800BE0F8.c)
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 *     sub_1800C21A0 @ 0x1800C21A0 (sub_1800C21A0.c)
 *     sub_1800C2520 @ 0x1800C2520 (sub_1800C2520.c)
 *     sub_1800C2900 @ 0x1800C2900 (sub_1800C2900.c)
 *     sub_1800C2C40 @ 0x1800C2C40 (sub_1800C2C40.c)
 *     sub_1800C3144 @ 0x1800C3144 (sub_1800C3144.c)
 *     sub_1800C3190 @ 0x1800C3190 (sub_1800C3190.c)
 *     sub_1800C31DC @ 0x1800C31DC (sub_1800C31DC.c)
 *     sub_1800C3634 @ 0x1800C3634 (sub_1800C3634.c)
 *     sub_1800C4380 @ 0x1800C4380 (sub_1800C4380.c)
 *     sub_1800C460C @ 0x1800C460C (sub_1800C460C.c)
 *     sub_1800C52FC @ 0x1800C52FC (sub_1800C52FC.c)
 *     sub_1800C58F8 @ 0x1800C58F8 (sub_1800C58F8.c)
 *     sub_1800C62FC @ 0x1800C62FC (sub_1800C62FC.c)
 *     sub_1800C6D70 @ 0x1800C6D70 (sub_1800C6D70.c)
 *     sub_1800C7110 @ 0x1800C7110 (sub_1800C7110.c)
 *     sub_1800C78DC @ 0x1800C78DC (sub_1800C78DC.c)
 *     sub_1800C7C20 @ 0x1800C7C20 (sub_1800C7C20.c)
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_1800CA73C @ 0x1800CA73C (sub_1800CA73C.c)
 *     sub_1800DC25C @ 0x1800DC25C (sub_1800DC25C.c)
 *     sub_1800DCAC0 @ 0x1800DCAC0 (sub_1800DCAC0.c)
 *     sub_1800EFE20 @ 0x1800EFE20 (sub_1800EFE20.c)
 *     sub_1800FA400 @ 0x1800FA400 (sub_1800FA400.c)
 *     sub_180110C10 @ 0x180110C10 (sub_180110C10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007797C(__int64 a1, int a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 *v4; // rax

  v2 = *(__int64 **)(a1 + 1080);
  v3 = v2;
  v4 = (__int64 *)v2[1];
  if ( *((_BYTE *)v4 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v4 + 8) >= a2 )
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  while ( !*((_BYTE *)v4 + 25) );
  if ( v3 == v2 || a2 < *((_DWORD *)v3 + 8) )
LABEL_8:
    v3 = v2;
  return v3[5];
}
