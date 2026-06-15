/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18001EB30
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800194A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, int a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  int PackageClaims; // r8d
  _DWORD *v9; // rdx

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    PackageClaims = 0;
    *a4 = 0;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
    if ( (*(_BYTE *)a5 & 1) != 0 )
    {
      if ( (*(_BYTE *)a5 & 2) != 0 )
      {
        if ( (*(_BYTE *)a5 & 4) != 0 )
        {
          v9 = &unk_18003E820;
        }
        else if ( (*(_QWORD *)a4 & 0x400LL) != 0 )
        {
          v9 = &unk_18003E830;
        }
        else if ( (*(_QWORD *)a4 & 0x800LL) != 0 )
        {
          v9 = &unk_18003E834;
        }
        else if ( (*(_BYTE *)a4 & 4) != 0 )
        {
          v9 = &unk_18003E814;
        }
        else if ( (*(_BYTE *)a4 & 8) != 0 )
        {
          v9 = &unk_18003E828;
        }
        else if ( (*(_BYTE *)a4 & 0x40) != 0 )
        {
          v9 = &unk_18003E82C;
        }
        else
        {
          v9 = &unk_18003E838;
          if ( (*(_QWORD *)a4 & 0x1000LL) == 0 )
            v9 = &`AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
        }
      }
      else
      {
        v9 = &unk_18003E824;
      }
    }
    else
    {
      v9 = &unk_18003E818;
    }
    *a3 = v9[11 * (a2 - 1)];
  }
  return (unsigned int)PackageClaims;
}
