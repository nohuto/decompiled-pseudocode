/*
 * XREFs of WarbirdCrypto::CCipherFeistel64::CallRoundFunction @ 0x1400FBA60
 * Callers:
 *     sub_1400010A0 @ 0x1400010A0 (sub_1400010A0.c)
 *     sub_1400FB6F0 @ 0x1400FB6F0 (sub_1400FB6F0.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

__int64 __fastcall WarbirdCrypto::CCipherFeistel64::CallRoundFunction(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  char v6; // r11
  _DWORD *v7; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // r10d
  int v10; // r9d
  int v11; // eax
  unsigned int v12; // r9d
  unsigned int v13; // ecx
  unsigned int v14; // r10d
  int v15; // r9d
  int v16; // eax
  int v17; // r9d
  unsigned int v18; // edi
  __int64 result; // rax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // r9d
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // r10d
  int v27; // r9d
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // r9d
  unsigned int v31; // ecx
  unsigned int v32; // r10d
  unsigned int v33; // r9d
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // r9d
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // r9d
  unsigned int v40; // r10d
  unsigned int v41; // ecx
  unsigned int v42; // r9d
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // r9d
  unsigned int v46; // ecx
  unsigned int v47; // r10d
  unsigned int v48; // ecx
  unsigned int v49; // r9d
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // r9d
  unsigned int v53; // ecx
  unsigned int v54; // r9d
  unsigned int v55; // r9d
  unsigned int v56; // ecx
  unsigned int v57; // r9d
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // r9d
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  unsigned int v64; // r9d
  __int64 v65; // [rsp+0h] [rbp-20h]
  __int64 v66; // [rsp+8h] [rbp-18h]

  v6 = a2;
  v7 = (_DWORD *)(a1 + 16LL * a2);
  switch ( v7[2] )
  {
    case 0:
      v59 = v7[4];
      v60 = v7[3];
      v65 = a3;
      v66 = a3;
      return (a4 >> (v59 % 0xF + 1))
           + *((unsigned __int16 *)&v66 + (v6 & 3))
           * (a4 ^ *((unsigned __int16 *)&v65 + ((v60 % 3 + (_BYTE)a2 + 1) & 3)));
    case 1:
      v37 = v7[3];
      v32 = v7[4];
      v66 = a3;
      v65 = a3;
      v33 = a4 - *((unsigned __int16 *)&v66 + ((v37 % 3 + (_BYTE)a2 + 1) & 3));
      v34 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_19;
    case 2:
      v53 = v7[4];
      v54 = v7[3];
      v66 = a3;
      v65 = a3;
      return (a4 >> (v53 % 0xF + 1)) ^ (*((unsigned __int16 *)&v65 + (v6 & 3))
                                      * (a4 ^ *((unsigned __int16 *)&v66 + ((v54 % 3 + (_BYTE)a2 + 1) & 3))));
    case 3:
      v63 = v7[4];
      v64 = v7[3];
      v66 = a3;
      v65 = a3;
      return __ROR4__(a4, v63 % 0xF + 1)
           + *((unsigned __int16 *)&v65 + (v6 & 3))
           * (a4 ^ *((unsigned __int16 *)&v66 + ((v64 % 3 + (_BYTE)a2 + 1) & 3)));
    case 4:
      v35 = v7[4];
      v36 = v7[3];
      v66 = a3;
      v65 = a3;
      return *((unsigned __int16 *)&v65 + (v6 & 3))
           * (a4 ^ *((unsigned __int16 *)&v66 + ((v36 % 3 + (_BYTE)a2 + 1) & 3)))
           - __ROR4__(a4, v35 % 0xF + 1);
    case 5:
      v44 = v7[4];
      v45 = v7[3];
      v66 = a3;
      v65 = a3;
      return __ROR4__(a4, v44 % 0xF + 1) ^ (*((unsigned __int16 *)&v65 + (v6 & 3))
                                          * (a4 ^ *((unsigned __int16 *)&v66 + ((v45 % 3 + (_BYTE)a2 + 1) & 3))));
    case 6:
      v40 = v7[5];
      v41 = v7[4];
      v42 = v7[3];
      v66 = a3;
      v65 = a3;
      return (a4 >> (v40 % 0xF + 1))
           + *((unsigned __int16 *)&v65 + (v6 & 3))
           * __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v42 % 3 + (_BYTE)a2 + 1) & 3)), v41 % 7 + 1);
    case 7:
      v31 = v7[4];
      v32 = v7[5];
      v66 = a3;
      v65 = a3;
      v33 = __ROL4__(a4 ^ *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v31 % 7 + 1);
      v34 = *((unsigned __int16 *)&v65 + (v6 & 3));
LABEL_19:
      v17 = v34 * v33;
      v18 = a4 >> (v32 % 0xF + 1);
      goto LABEL_6;
    case 8:
      v47 = v7[5];
      v48 = v7[4];
      v49 = v7[3];
      v66 = a3;
      v65 = a3;
      v12 = (a4 >> (v47 % 0xF + 1)) ^ (*((unsigned __int16 *)&v65 + (v6 & 3))
                                     * __ROL4__(
                                         a4 - *((unsigned __int16 *)&v66 + ((v49 % 3 + (_BYTE)a2 + 1) & 3)),
                                         v48 % 7 + 1));
      goto LABEL_7;
    case 9:
      v38 = v7[4];
      v39 = v7[3];
      v26 = v7[5];
      v66 = a3;
      v65 = a3;
      v27 = __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v39 % 3 + (_BYTE)a2 + 1) & 3)), v38 % 7 + 1);
      v28 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v26 % 0x1F + 1) + v28 * v27);
    case 0xA:
      v29 = v7[4];
      v30 = v7[3];
      v14 = v7[5];
      v66 = a3;
      v65 = a3;
      v15 = __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v30 % 3 + (_BYTE)a2 + 1) & 3)), v29 % 7 + 1);
      v16 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_5;
    case 0xB:
      v51 = v7[4];
      v52 = v7[3];
      v9 = v7[5];
      v66 = a3;
      v65 = a3;
      v10 = __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v52 % 3 + (_BYTE)a2 + 1) & 3)), v51 % 7 + 1);
      v11 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_3;
    case 0xC:
      v50 = v7[4];
      v26 = v7[5];
      v66 = a3;
      v65 = a3;
      v27 = __ROR4__(a4 + *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v50 % 0x1F + 1);
      v28 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v26 % 0x1F + 1) + v28 * v27);
    case 0xD:
      v62 = v7[4];
      v26 = v7[5];
      v66 = a3;
      v65 = a3;
      v27 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) - a4, v62 % 0x1F + 1);
      v28 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v26 % 0x1F + 1) + v28 * v27);
    case 0xE:
      v43 = v7[4];
      v26 = v7[5];
      v66 = a3;
      v65 = a3;
      v27 = __ROR4__(a4 ^ *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v43 % 0x1F + 1);
      v28 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v26 % 0x1F + 1) + v28 * v27);
    case 0xF:
      v61 = v7[4];
      v14 = v7[5];
      v66 = a3;
      v65 = a3;
      v15 = __ROR4__(a4 + *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v61 % 0x1F + 1);
      v16 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_5;
    case 0x10:
      v21 = v7[4];
      v14 = v7[5];
      v66 = a3;
      v65 = a3;
      v15 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) - a4, v21 % 0x1F + 1);
      v16 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_5;
    case 0x11:
      v13 = v7[4];
      v14 = v7[5];
      v66 = a3;
      v65 = a3;
      v15 = __ROR4__(a4 ^ *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v13 % 0x1F + 1);
      v16 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_5;
    case 0x12:
    case 0x17:
      v20 = v7[4];
      v9 = v7[5];
      v66 = a3;
      v65 = a3;
      v10 = __ROR4__(a4 - *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v20 % 0x1F + 1);
      v11 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_3;
    case 0x13:
      v8 = v7[4];
      v9 = v7[5];
      v66 = a3;
      v65 = a3;
      v10 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) - a4, v8 % 0x1F + 1);
      v11 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_3;
    case 0x14:
      v46 = v7[4];
      v9 = v7[5];
      v66 = a3;
      v65 = a3;
      v10 = __ROR4__(a4 ^ *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v46 % 0x1F + 1);
      v11 = *((unsigned __int16 *)&v65 + (v6 & 3));
LABEL_3:
      v12 = __ROR4__(a4, v9 % 0x1F + 1) ^ (v11 * v10);
      goto LABEL_7;
    case 0x15:
      v25 = v7[4];
      v26 = v7[5];
      v66 = a3;
      v65 = a3;
      v27 = __ROR4__(a4 - *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v25 % 0x1F + 1);
      v28 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v26 % 0x1F + 1) + v28 * v27);
    case 0x16:
      v24 = v7[4];
      v14 = v7[5];
      v66 = a3;
      v65 = a3;
      v15 = __ROR4__(a4 - *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v24 % 0x1F + 1);
      v16 = *((unsigned __int16 *)&v65 + (v6 & 3));
LABEL_5:
      v17 = v16 * v15;
      v18 = __ROR4__(a4, v14 % 0x1F + 1);
LABEL_6:
      v12 = v17 - v18;
LABEL_7:
      result = v12;
      break;
    case 0x18:
      v55 = v7[4];
      v56 = v7[3];
      v66 = a3;
      v65 = a3;
      result = (*((unsigned __int16 *)&v66 + (v6 & 3)) + __ROR4__(~a4, v56 % 0xF + 1))
             * (unsigned int)*((unsigned __int16 *)&v65 + ((v55 % 3 + (_BYTE)a2 + 1) & 3));
      break;
    case 0x19:
      v22 = v7[4];
      v23 = v7[3];
      v66 = a3;
      v65 = a3;
      result = (__ROR4__(a4, v23 % 0xF + 1) - *((unsigned __int16 *)&v66 + (v6 & 3)))
             * (unsigned int)*((unsigned __int16 *)&v65 + ((v22 % 3 + (_BYTE)a2 + 1) & 3));
      break;
    case 0x1A:
      v57 = v7[4];
      v58 = v7[3];
      v66 = a3;
      v65 = a3;
      result = (*((unsigned __int16 *)&v66 + (v6 & 3)) ^ __ROR4__(a4, v58 % 0xF + 1))
             * (unsigned int)*((unsigned __int16 *)&v65 + ((v57 % 3 + (_BYTE)a2 + 1) & 3));
      break;
    case 0x1B:
      v66 = a3;
      v65 = a3;
      result = *((_DWORD *)&v65 + (((_BYTE)a2 - 1) & 1)) - (a4 ^ *((_DWORD *)&v66 + (v6 & 1)));
      break;
    case 0x1C:
      v65 = a3;
      v66 = a3;
      result = a4 ^ *((_DWORD *)&v66 + (v6 & 1)) ^ *((_DWORD *)&v65 + (((_BYTE)a2 - 1) & 1));
      break;
    case 0x1D:
      v66 = a3;
      v65 = a3;
      result = *((_DWORD *)&v65 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) ^ (a4 - *((unsigned __int16 *)&v66 + (v6 & 3)));
      break;
    case 0x1E:
      v66 = a3;
      v65 = a3;
      result = a4 - *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) - *((unsigned __int16 *)&v65 + (v6 & 3));
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
