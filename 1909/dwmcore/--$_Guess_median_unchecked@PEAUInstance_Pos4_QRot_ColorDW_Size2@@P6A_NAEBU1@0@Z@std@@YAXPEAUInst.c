/*
 * XREFs of ??$_Guess_median_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@00P6A_NAEBU1@1@Z@Z @ 0x1801B2940
 * Callers:
 *     ??$_Partition_by_median_guess_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YA?AU?$pair@PEAUInstance_Pos4_QRot_ColorDW_Size2@@PEAU1@@0@PEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU2@1@Z@Z @ 0x1801B2D00 (--$_Partition_by_median_guess_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std.c)
 * Callees:
 *     ??$_Med3_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@00P6A_NAEBU1@1@Z@Z @ 0x1801B2C08 (--$_Med3_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos.c)
 */

__int64 __fastcall std::_Guess_median_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rbp

  v5 = (a3 - a1) / 48;
  if ( v5 <= 40 )
  {
    v9 = a1;
    v10 = a3;
  }
  else
  {
    v6 = (v5 + 1) >> 3;
    v7 = 48 * v6;
    v8 = 96 * v6;
    v9 = 48 * v6 + a1;
    std::_Med3_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
      a1,
      v9,
      96 * v6 + a1);
    std::_Med3_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
      a2 - v7,
      a2,
      v7 + a2);
    v10 = a3 - v7;
    std::_Med3_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
      a3 - v8,
      a3 - v7,
      a3);
  }
  return std::_Med3_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
           v9,
           a2,
           v10);
}
