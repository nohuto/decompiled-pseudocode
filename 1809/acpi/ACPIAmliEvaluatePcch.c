/*
 * XREFs of ACPIAmliEvaluatePcch @ 0x1C0095588
 * Callers:
 *     ACPIPccLegacyInitialize @ 0x1C0095470 (ACPIPccLegacyInitialize.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     AcpiParseGenRegDesc @ 0x1C00A9044 (AcpiParseGenRegDesc.c)
 */

__int64 __fastcall ACPIAmliEvaluatePcch(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 *v8; // rdi
  int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r11
  __int64 v15; // rcx
  bool v16; // zf
  int v17; // eax
  __int128 v18; // xmm1
  __int64 v19; // xmm0_8
  __int64 v20; // r11
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = AMLIGetNamedChild(a1, 1212367696);
  if ( v8 )
  {
    memset(v21, 0, 0x28uLL);
    v9 = AMLIEvalNameSpaceObject((unsigned __int64 *)v8, v21, 0, 0LL);
    if ( v9 < 0 )
    {
LABEL_18:
      AMLIDereferenceHandleEx((__int64)v8);
      return (unsigned int)v9;
    }
    if ( WORD1(v21[0]) == 4 )
    {
      v14 = v21[4];
      if ( *(_DWORD *)v21[4] == 4 && *(_WORD *)(v21[4] + 10LL) == 3 && *(_DWORD *)(v21[4] + 32LL) >= 0x2Eu )
      {
        v15 = *(_QWORD *)(v21[4] + 40LL);
        if ( *(_BYTE *)v15 == 0x8A )
        {
          v16 = *(_WORD *)(v21[4] + 50LL) == 3;
          v17 = *(_DWORD *)(v15 + 40);
          v18 = *(_OWORD *)(v15 + 16);
          *(_OWORD *)a2 = *(_OWORD *)v15;
          v19 = *(_QWORD *)(v15 + 32);
          *(_OWORD *)(a2 + 16) = v18;
          *(_QWORD *)(a2 + 32) = v19;
          *(_DWORD *)(a2 + 40) = v17;
          *(_WORD *)(a2 + 44) = *(_WORD *)(v15 + 44);
          if ( v16 && *(_DWORD *)(v14 + 72) >= 0xCu )
          {
            v9 = AcpiParseGenRegDesc(*(_QWORD *)(v14 + 80), a3);
            if ( v9 < 0 )
            {
LABEL_17:
              AMLIFreeDataBuffs((__int64)v21, v11, v12, v13);
              goto LABEL_18;
            }
            if ( *(_WORD *)(v20 + 90) == 1 )
            {
              *a4 = *(_QWORD *)(v20 + 104);
              if ( *(_WORD *)(v20 + 130) == 1 )
              {
                *a5 = *(_QWORD *)(v20 + 144);
                goto LABEL_17;
              }
            }
          }
        }
      }
    }
    v9 = -1072431096;
    goto LABEL_17;
  }
  return (unsigned int)-1073741823;
}
