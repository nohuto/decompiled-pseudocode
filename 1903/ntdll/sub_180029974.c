/*
 * XREFs of sub_180029974 @ 0x180029974
 * Callers:
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 *     sub_1800253F0 @ 0x1800253F0 (sub_1800253F0.c)
 *     sub_180029CEC @ 0x180029CEC (sub_180029CEC.c)
 * Callees:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 */

__int64 __fastcall sub_180029974(unsigned __int16 *a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int16 v7; // si
  _WORD *v9; // r14
  _OBJECT_BOUNDARY_DESCRIPTOR *v10; // rcx
  char v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF
  int v13; // [rsp+74h] [rbp+1Ch]
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v4 = sub_180027B70(a1, *(unsigned __int16 *)(a2 + 2), *(WCHAR **)(a2 + 8), &v14, &v11, (__int64)&v12);
  v6 = 0;
  while ( 1 )
  {
    v7 = v4;
    if ( v11 )
      break;
    if ( v4 - 1 > 0xFFFD )
      return (unsigned int)-1073741562;
    if ( v12 == 5 && (dword_1801664DC & v13) != 0 )
      break;
    if ( v4 < *(unsigned __int16 *)(a2 + 2) )
    {
      *(_WORD *)a2 = v4;
      return v6;
    }
    v9 = (_WORD *)sub_18006D6B8(v4, v5);
    if ( !v9 )
      return (unsigned int)-1073741801;
    v10 = *(_OBJECT_BOUNDARY_DESCRIPTOR **)(a2 + 8);
    if ( (_OBJECT_BOUNDARY_DESCRIPTOR *)(a2 + 16) != v10 )
      RtlDeleteBoundaryDescriptor(v10);
    *(_WORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 8) = v9;
    *(_WORD *)a2 = 0;
    *(_WORD *)(a2 + 2) = v7;
    *v9 = 0;
    v4 = sub_180027B70(a1, *(unsigned __int16 *)(a2 + 2), *(WCHAR **)(a2 + 8), &v14, &v11, (__int64)&v12);
  }
  return (unsigned int)-1073741515;
}
