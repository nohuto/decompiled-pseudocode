/*
 * XREFs of ??$_Sort_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU1@1@Z@Z @ 0x1801B4B20
 * Callers:
 *     ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x1801B4BA4 (--$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos.c)
 * Callees:
 *     ??$_Pop_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU1@1@Z@Z @ 0x1801B49C0 (--$_Pop_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance.c)
 */

unsigned __int64 __fastcall std::_Sort_heap_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        char *a1,
        __int64 a2,
        unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  __int64 v3; // rbx
  __int128 i; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 result; // rax

  v3 = a2;
  for ( i = (a2 - (__int64)a1) * (__int128)0x2AAAAAAAAAAAAAABLL; ; i = (v3 - (__int64)a1)
                                                                     * (__int128)0x2AAAAAAAAAAAAAABLL )
  {
    v7 = *((__int64 *)&i + 1) >> 3;
    result = v7 >> 63;
    if ( (__int64)((v7 >> 63) + v7) < 2 )
      break;
    std::_Pop_heap_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
      a1,
      v3,
      a3);
    v3 -= 48LL;
  }
  return result;
}
