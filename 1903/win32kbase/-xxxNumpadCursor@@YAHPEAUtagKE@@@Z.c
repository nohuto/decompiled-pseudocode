/*
 * XREFs of ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00960E0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsSAS @ 0x1C00B31CC (ApiSetEditionIsSAS.c)
 *     xxxKeyEventEx @ 0x1C01861D0 (xxxKeyEventEx.c)
 */

__int64 __fastcall xxxNumpadCursor(struct tagKE *a1)
{
  char *v2; // rdi
  __int64 v3; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  int v9; // eax
  __int16 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-38h]
  char v13; // [rsp+68h] [rbp+10h] BYREF

  if ( byte_1C0218D74 )
  {
    if ( byte_1C0218D74 == *((_BYTE *)a1 + 2) )
    {
      v6 = *((unsigned __int16 *)a1 + 1);
      if ( (v6 & 0x8000u) != 0LL )
      {
        xxxKeyEventEx(
          v6,
          *(unsigned __int8 *)a1,
          *((unsigned int *)a1 + 1),
          0LL,
          *((_QWORD *)a1 + 1),
          (char *)a1 + 16,
          0,
          0,
          0LL,
          0LL);
        *((_WORD *)a1 + 1) = word_1C02199F8;
        *(_BYTE *)a1 = byte_1C02199FA;
        byte_1C0218D74 = 0;
      }
      return 1LL;
    }
    v2 = (char *)a1 + 16;
    xxxKeyEventEx(
      (unsigned __int16)word_1C02199F8,
      (unsigned __int16)(unsigned __int8)byte_1C02199FA | 0x200u,
      *((unsigned int *)a1 + 1),
      0LL,
      *((_QWORD *)a1 + 1),
      (char *)a1 + 16,
      0,
      0,
      0LL,
      0LL);
    byte_1C0218D74 = 0;
  }
  else
  {
    v2 = (char *)a1 + 16;
  }
  v3 = 2048LL;
  if ( (*((_WORD *)a1 + 1) & 0x800) != 0 )
  {
    LOBYTE(v3) = *((_WORD *)a1 + 1);
    if ( !(unsigned int)ApiSetEditionIsSAS(v3, &v13)
      && ((byte_1C02142E4 & 2) != 0 || gptiForeground && (*((_DWORD *)gptiForeground + 306) & 0x800000) != 0) )
    {
      if ( (byte_1C02142C4 & 1) != 0 )
      {
        v7 = *((_QWORD *)a1 + 1);
        byte_1C0218D74 = *((_BYTE *)a1 + 2);
        v12 = v7;
        v8 = *((unsigned int *)a1 + 1);
        byte_1C02199FA = (byte_1C02142E8 & 4) != 0 ? 54 : 42;
        word_1C02199F8 = (byte_1C02142E8 & 4) != 0 ? 417 : 160;
        LOWORD(v5) = word_1C02199F8 | 0x8000;
        xxxKeyEventEx(v5, (unsigned __int16)(unsigned __int8)byte_1C02199FA | 0x200u, v8, 0LL, v12, v2, 0, 0, 0LL, 0LL);
      }
      else if ( (*((_WORD *)a1 + 1) & 0x2000) == 0 )
      {
        v9 = 0;
        if ( ausNumPadCvt[0] )
        {
          v10 = ausNumPadCvt;
          v11 = 0LL;
          while ( *(_BYTE *)v10 != *((_BYTE *)a1 + 2) )
          {
            ++v11;
            ++v9;
            v10 = &ausNumPadCvt[v11];
            if ( !*v10 )
              return 1LL;
          }
          *((_BYTE *)a1 + 2) = 0;
          *((_WORD *)a1 + 1) |= HIBYTE(ausNumPadCvt[v9]);
        }
      }
    }
  }
  return 1LL;
}
