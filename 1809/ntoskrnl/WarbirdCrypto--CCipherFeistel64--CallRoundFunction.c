/*
 * XREFs of WarbirdCrypto::CCipherFeistel64::CallRoundFunction @ 0x14010D1E0
 * Callers:
 *     sub_140001180 @ 0x140001180 (sub_140001180.c)
 *     sub_14010CE30 @ 0x14010CE30 (sub_14010CE30.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
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
  unsigned int v20; // r9d
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // r9d
  unsigned int v27; // ecx
  unsigned int v28; // r10d
  unsigned int v29; // r9d
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // r10d
  int v33; // r9d
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // r9d
  unsigned int v37; // ecx
  unsigned int v38; // r9d
  unsigned int v39; // r10d
  unsigned int v40; // ecx
  unsigned int v41; // r9d
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // r9d
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // r10d
  unsigned int v49; // ecx
  unsigned int v50; // r9d
  unsigned int v51; // r9d
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // r9d
  unsigned int v55; // r9d
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // r9d
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // r9d
  unsigned int v62; // ecx
  unsigned int v63; // r9d
  unsigned int v64; // ecx
  __int64 v65; // [rsp+0h] [rbp-20h]
  __int64 v66; // [rsp+8h] [rbp-18h]

  v6 = a2;
  v7 = (_DWORD *)(a1 + 16LL * a2);
  switch ( v7[2] )
  {
    case 0:
      v53 = v7[4];
      v54 = v7[3];
      v65 = a3;
      v66 = a3;
      return (a4 >> (v53 % 0xF + 1))
           + *((unsigned __int16 *)&v66 + (v6 & 3))
           * (a4 ^ *((unsigned __int16 *)&v65 + ((v54 % 3 + (_BYTE)a2 + 1) & 3)));
    case 1:
      v42 = v7[3];
      v28 = v7[4];
      v66 = a3;
      v65 = a3;
      v29 = a4 - *((unsigned __int16 *)&v66 + ((v42 % 3 + (_BYTE)a2 + 1) & 3));
      v30 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_18;
    case 2:
      v60 = v7[4];
      v61 = v7[3];
      v66 = a3;
      v65 = a3;
      return (a4 >> (v60 % 0xF + 1)) ^ (*((unsigned __int16 *)&v65 + (v6 & 3))
                                      * (a4 ^ *((unsigned __int16 *)&v66 + ((v61 % 3 + (_BYTE)a2 + 1) & 3))));
    case 3:
      v62 = v7[4];
      v63 = v7[3];
      v66 = a3;
      v65 = a3;
      return __ROR4__(a4, v62 % 0xF + 1)
           + *((unsigned __int16 *)&v65 + (v6 & 3))
           * (a4 ^ *((unsigned __int16 *)&v66 + ((v63 % 3 + (_BYTE)a2 + 1) & 3)));
    case 4:
      v37 = v7[4];
      v38 = v7[3];
      v66 = a3;
      v65 = a3;
      return *((unsigned __int16 *)&v65 + (v6 & 3))
           * (a4 ^ *((unsigned __int16 *)&v66 + ((v38 % 3 + (_BYTE)a2 + 1) & 3)))
           - __ROR4__(a4, v37 % 0xF + 1);
    case 5:
      v43 = v7[4];
      v44 = v7[3];
      v66 = a3;
      v65 = a3;
      return __ROR4__(a4, v43 % 0xF + 1) ^ (*((unsigned __int16 *)&v65 + (v6 & 3))
                                          * (a4 ^ *((unsigned __int16 *)&v66 + ((v44 % 3 + (_BYTE)a2 + 1) & 3))));
    case 6:
      v39 = v7[5];
      v40 = v7[4];
      v41 = v7[3];
      v66 = a3;
      v65 = a3;
      return (a4 >> (v39 % 0xF + 1))
           + *((unsigned __int16 *)&v65 + (v6 & 3))
           * __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v41 % 3 + (_BYTE)a2 + 1) & 3)), v40 % 7 + 1);
    case 7:
      v27 = v7[4];
      v28 = v7[5];
      v66 = a3;
      v65 = a3;
      v29 = __ROL4__(a4 ^ *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v27 % 7 + 1);
      v30 = *((unsigned __int16 *)&v65 + (v6 & 3));
LABEL_18:
      v17 = v30 * v29;
      v18 = a4 >> (v28 % 0xF + 1);
      goto LABEL_6;
    case 8:
      v48 = v7[5];
      v49 = v7[4];
      v50 = v7[3];
      v66 = a3;
      v65 = a3;
      v12 = (a4 >> (v48 % 0xF + 1)) ^ (*((unsigned __int16 *)&v65 + (v6 & 3))
                                     * __ROL4__(
                                         a4 - *((unsigned __int16 *)&v66 + ((v50 % 3 + (_BYTE)a2 + 1) & 3)),
                                         v49 % 7 + 1));
      goto LABEL_7;
    case 9:
      v35 = v7[4];
      v36 = v7[3];
      v32 = v7[5];
      v66 = a3;
      v65 = a3;
      v33 = __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v36 % 3 + (_BYTE)a2 + 1) & 3)), v35 % 7 + 1);
      v34 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v32 % 0x1F + 1) + v34 * v33);
    case 0xA:
      v25 = v7[4];
      v26 = v7[3];
      v14 = v7[5];
      v66 = a3;
      v65 = a3;
      v15 = __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v26 % 3 + (_BYTE)a2 + 1) & 3)), v25 % 7 + 1);
      v16 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_5;
    case 0xB:
      v57 = v7[4];
      v58 = v7[3];
      v9 = v7[5];
      v66 = a3;
      v65 = a3;
      v10 = __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v58 % 3 + (_BYTE)a2 + 1) & 3)), v57 % 7 + 1);
      v11 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_3;
    case 0xC:
      v47 = v7[4];
      v32 = v7[5];
      v66 = a3;
      v65 = a3;
      v33 = __ROR4__(a4 + *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v47 % 0x1F + 1);
      v34 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v32 % 0x1F + 1) + v34 * v33);
    case 0xD:
      v64 = v7[4];
      v32 = v7[5];
      v66 = a3;
      v65 = a3;
      v33 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) - a4, v64 % 0x1F + 1);
      v34 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v32 % 0x1F + 1) + v34 * v33);
    case 0xE:
      v46 = v7[4];
      v32 = v7[5];
      v66 = a3;
      v65 = a3;
      v33 = __ROR4__(a4 ^ *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v46 % 0x1F + 1);
      v34 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v32 % 0x1F + 1) + v34 * v33);
    case 0xF:
      v59 = v7[4];
      v14 = v7[5];
      v66 = a3;
      v65 = a3;
      v15 = __ROR4__(a4 + *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v59 % 0x1F + 1);
      v16 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_5;
    case 0x10:
      v22 = v7[4];
      v14 = v7[5];
      v66 = a3;
      v65 = a3;
      v15 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) - a4, v22 % 0x1F + 1);
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
      v23 = v7[4];
      v9 = v7[5];
      v66 = a3;
      v65 = a3;
      v10 = __ROR4__(a4 - *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v23 % 0x1F + 1);
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
      v45 = v7[4];
      v9 = v7[5];
      v66 = a3;
      v65 = a3;
      v10 = __ROR4__(a4 ^ *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v45 % 0x1F + 1);
      v11 = *((unsigned __int16 *)&v65 + (v6 & 3));
LABEL_3:
      v12 = __ROR4__(a4, v9 % 0x1F + 1) ^ (v11 * v10);
      goto LABEL_7;
    case 0x15:
      v31 = v7[4];
      v32 = v7[5];
      v66 = a3;
      v65 = a3;
      v33 = __ROR4__(a4 - *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v31 % 0x1F + 1);
      v34 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v32 % 0x1F + 1) + v34 * v33);
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
      v20 = v7[4];
      v21 = v7[3];
      v66 = a3;
      v65 = a3;
      result = (__ROR4__(a4, v21 % 0xF + 1) - *((unsigned __int16 *)&v66 + (v6 & 3)))
             * (unsigned int)*((unsigned __int16 *)&v65 + ((v20 % 3 + (_BYTE)a2 + 1) & 3));
      break;
    case 0x1A:
      v51 = v7[4];
      v52 = v7[3];
      v66 = a3;
      v65 = a3;
      result = (*((unsigned __int16 *)&v66 + (v6 & 3)) ^ __ROR4__(a4, v52 % 0xF + 1))
             * (unsigned int)*((unsigned __int16 *)&v65 + ((v51 % 3 + (_BYTE)a2 + 1) & 3));
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
