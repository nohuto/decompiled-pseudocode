/*
 * XREFs of sfac_ShaveSbitMetrics @ 0x1C02C17D0
 * Callers:
 *     GetSbitComponent @ 0x1C02B7C48 (GetSbitComponent.c)
 *     GetSbitMetrics @ 0x1C02B80D4 (GetSbitMetrics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     InvokeReleaseSfntFrag @ 0x1C02BED34 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02BF6EC (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_ShaveSbitMetrics(
        __int64 a1,
        __int16 a2,
        int a3,
        int a4,
        unsigned __int16 a5,
        _WORD *a6,
        unsigned __int16 *a7,
        _WORD *a8,
        _WORD *a9,
        _WORD *a10,
        _WORD *a11,
        _WORD *a12,
        _WORD *a13,
        _WORD *a14,
        _WORD *a15)
{
  __int16 v15; // bx
  int v17; // esi
  _WORD *v18; // r13
  __int16 v19; // cx
  unsigned __int8 v20; // di
  unsigned __int16 v21; // r15
  unsigned __int8 v22; // r14
  __int64 result; // rax
  unsigned __int16 v24; // r10
  unsigned __int16 v25; // r12
  int v26; // r11d
  __int16 v27; // r8
  __int16 v28; // r9
  __int16 v29; // ax
  unsigned __int8 *v30; // r13
  __int16 v31; // di
  unsigned __int16 v32; // cx
  unsigned __int16 v33; // r15
  unsigned __int16 v34; // r14
  char v35; // dl
  __int16 v36; // ax
  unsigned __int16 v37; // ax
  __int16 v38; // dx
  __int64 v39; // rcx
  char v40; // al
  __int16 v41; // ax
  __int16 v42; // ax
  __int16 v43; // r12
  __int16 v44; // si
  _QWORD *v45; // r11
  char v46; // r9
  unsigned __int8 v47; // dl
  __int16 v48; // r8
  _BYTE *v49; // rax
  unsigned __int8 v50; // cl
  _BYTE *v51; // r10
  unsigned __int8 v52; // dl
  unsigned __int8 v53; // r11
  _BYTE *v54; // rax
  _WORD *v55; // rcx
  char v56; // [rsp+30h] [rbp-89h]
  __int16 v57; // [rsp+32h] [rbp-87h]
  __int16 v58; // [rsp+34h] [rbp-85h]
  unsigned __int8 *v59; // [rsp+38h] [rbp-81h] BYREF
  int v60; // [rsp+40h] [rbp-79h]
  unsigned __int16 *v61; // [rsp+48h] [rbp-71h]
  _WORD *v62; // [rsp+50h] [rbp-69h]
  __int64 v63; // [rsp+58h] [rbp-61h]
  _WORD *v64; // [rsp+60h] [rbp-59h]
  _WORD *v65; // [rsp+68h] [rbp-51h]
  _WORD *v66; // [rsp+70h] [rbp-49h]
  _WORD *v67; // [rsp+78h] [rbp-41h]
  _WORD *v68; // [rsp+80h] [rbp-39h]
  _WORD *v69; // [rsp+88h] [rbp-31h]
  _WORD *v70; // [rsp+90h] [rbp-29h]
  _WORD *v71; // [rsp+98h] [rbp-21h]
  _QWORD v72[2]; // [rsp+A0h] [rbp-19h] BYREF

  v15 = 0;
  v17 = a4;
  v18 = a7;
  *a8 = 0;
  v63 = a1;
  *a9 = 0;
  v66 = a12;
  v70 = a13;
  *a10 = 0;
  *a11 = 0;
  v62 = a6;
  v61 = a7;
  v64 = a8;
  v65 = a9;
  v68 = a10;
  v69 = a11;
  v67 = a14;
  v71 = a15;
  if ( a2 == 5 )
  {
    v19 = *a7;
    v20 = 0x80;
    v21 = a5;
    if ( a5 * *a7 <= 128 )
    {
      v22 = 0;
      v72[0] = 0LL;
      v72[1] = 0LL;
      if ( a4 )
      {
        if ( v19 && *a6 )
        {
          result = sfac_GetDataPtr(a1, a3, a4, 16, 1, (__int64 *)&v59);
          if ( (_DWORD)result )
            return result;
          v24 = 0;
          v25 = 0;
          v57 = 0;
          v26 = 0;
          v27 = 0;
          v28 = 0;
          v29 = *v62;
          v58 = *v62;
          if ( *v62 )
          {
            v30 = v59;
            v31 = *v62;
            v32 = a5 * *a7;
            v60 = a5 * *a7;
            do
            {
              v56 = 0;
              v59 = (unsigned __int8 *)v72;
              v33 = 8;
              v34 = v32;
              v35 = 0;
              if ( v32 )
              {
                do
                {
                  if ( v25 < 8u )
                  {
                    v24 <<= 8;
                    if ( v17 )
                    {
                      v36 = *v30++;
                      v24 |= v36;
                      --v17;
                    }
                    v25 += 8;
                  }
                  v37 = v34;
                  if ( v33 <= v34 )
                    v37 = v33;
                  v33 = v37;
                  v38 = v24 >> (v25 - 8);
                  v25 -= v37;
                  v39 = (__int64)v59;
                  LOBYTE(v38) = byte_1C02DF358[v37] & v38;
                  *v59 |= v38;
                  v40 = v38 | v56;
                  v56 |= v38;
                  v59 = (unsigned __int8 *)(v39 + 1);
                  v34 -= v33;
                }
                while ( v34 );
                v27 = v57;
                v32 = v60;
                if ( v40 )
                  v26 = 1;
                v35 = v40;
              }
              v41 = --v31;
              if ( !v35 )
                v41 = v28;
              v28 = v41;
              v42 = v27 + 1;
              if ( v26 )
                v42 = v27;
              v57 = v42;
              v27 = v42;
            }
            while ( v31 );
            v22 = v72[0];
            v20 = 0x80;
            v21 = a5;
            v18 = v61;
            v29 = v58;
          }
          v43 = 0;
          v44 = 0;
          if ( v27 != v29 )
          {
            v43 = v28;
            v44 = v27;
          }
          InvokeReleaseSfntFrag(*(_DWORD *)(v63 + 12));
          v45 = v72;
          switch ( v21 )
          {
            case 1u:
              v46 = 1;
              break;
            case 2u:
              v20 = -64;
              v46 = 3;
              break;
            case 4u:
              v20 = -16;
              v46 = 15;
              break;
            default:
              v46 = -1;
              v20 = -1;
              break;
          }
          v47 = v20;
          v48 = 0;
          if ( (v22 & v20) != 0 )
          {
LABEL_40:
            v51 = (char *)v72 + ((unsigned __int64)(unsigned __int16)(v21 * (*v18 - 1)) >> 3);
            v52 = v20 >> ((v21 * (*(_BYTE *)v18 - 1)) & 7);
            if ( (v52 & *v51) == 0 )
            {
              do
              {
                ++v15;
                v53 = v52;
                if ( v52 == v20 )
                  v52 = v46;
                else
                  v52 <<= v21;
                v54 = v51 - 1;
                if ( v53 != v20 )
                  v54 = v51;
                v51 = v54;
              }
              while ( (v52 & *v54) == 0 );
              v18 = v61;
            }
            v55 = v62;
            *v64 = v48;
            *v65 = v15;
            *v18 -= v48 + v15;
            *v66 += v48;
            *v67 += v48;
            *v68 = v44;
            *v69 = v43;
            *v55 -= v43 + v44;
            *v70 -= v44;
            *v71 -= v44;
          }
          else
          {
            while ( ++v48 != *v18 )
            {
              v49 = (char *)v45 + 1;
              v50 = v47 >> v21;
              v47 = v20;
              if ( v50 )
              {
                v49 = v45;
                v47 = v50;
              }
              v45 = v49;
              if ( (v47 & *v49) != 0 )
                goto LABEL_40;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
