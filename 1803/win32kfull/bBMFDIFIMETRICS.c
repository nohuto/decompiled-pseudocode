/*
 * XREFs of bBMFDIFIMETRICS @ 0x1C0225BDC
 * Callers:
 *     bBmfdLoadFont @ 0x1C0225D40 (bBmfdLoadFont.c)
 *     bConvertFontRes @ 0x1C0226134 (bConvertFontRes.c)
 *     bLoadNtFon @ 0x1C0227530 (bLoadNtFon.c)
 * Callees:
 *     cFacesRes @ 0x1C0227894 (cFacesRes.c)
 *     bMappedViewStrlen @ 0x1C02288FC (bMappedViewStrlen.c)
 */

__int64 __fastcall bBMFDIFIMETRICS(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned int *a5)
{
  unsigned int *v5; // rsi
  unsigned int v6; // ebx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned int v11; // edi
  int v12; // r11d
  unsigned int v13; // r15d
  unsigned int v14; // eax
  unsigned __int64 v15; // r10
  unsigned int v16; // r11d
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // eax

  v5 = a5;
  v6 = 0;
  if ( a5 )
    *a5 = 0;
  v9 = a4[2];
  if ( !v9 )
    v9 = *a4
       + ((*(unsigned __int8 *)(*a4 + 108LL) << 24) | *(unsigned __int8 *)(*a4 + 105LL) | (unsigned __int64)(*(unsigned __int16 *)(*a4 + 106LL) << 8));
  if ( (unsigned int)bMappedViewStrlen(a1, a2, v9, &a5) )
  {
    if ( (unsigned int *)((char *)a5 + 2) >= a5 )
    {
      v10 = 2LL * (unsigned int)((_DWORD)a5 + 2);
      if ( v10 <= 0xFFFFFFFF && (int)v10 + 3 >= (unsigned int)v10 )
      {
        v11 = (v10 + 3) & 0xFFFFFFFC;
        v12 = -1;
        if ( v11 + 192 >= 0xC0 )
          v12 = v11 + 192;
        v13 = v12;
        if ( v11 < 0xFFFFFF40 )
        {
          v14 = cFacesRes(a4, (char *)a5 + 2) - 1;
          if ( !v14 )
            goto LABEL_18;
          v17 = 20LL * v14;
          if ( v17 <= v15 && (unsigned int)(v17 + 12) >= 0xC )
          {
            v18 = v16 + v17 + 12;
            if ( v18 >= v16 )
              LODWORD(v15) = v16 + v17 + 12;
            v16 = v15;
            if ( v18 >= v13 )
            {
LABEL_18:
              if ( v16 + 7 >= v16 )
              {
                v19 = (v16 + 7) & 0xFFFFFFF8;
                if ( a3 )
                {
                  *(_DWORD *)(a3 + 20) = v11;
                  *(_DWORD *)(a3 + 24) = v19;
                }
                if ( v5 )
                  *v5 = v19;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return v6;
}
