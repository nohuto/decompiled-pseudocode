/*
 * XREFs of Intersect26Dot6 @ 0x1C02BB730
 * Callers:
 *     EmboldPoint @ 0x1C02BB384 (EmboldPoint.c)
 * Callees:
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 */

unsigned __int64 __fastcall Intersect26Dot6(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
{
  int v6; // esi
  unsigned __int64 result; // rax
  int v8; // r8d
  int v9; // ecx
  int v10; // ecx
  int v11; // ebp
  int v12; // edi
  int v13; // r14d
  int v14; // r15d
  int v15; // r14d
  int v16; // r15d
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // r14
  int v20; // eax
  int v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+80h] [rbp+8h]
  int v23; // [rsp+8Ch] [rbp+14h]
  int v24; // [rsp+94h] [rbp+1Ch]
  int v25; // [rsp+98h] [rbp+20h]

  v24 = HIDWORD(a3);
  v23 = HIDWORD(a2);
  v6 = a1;
  result = HIDWORD(a1);
  v8 = a2 - a1;
  v9 = a4;
  v25 = v8;
  LODWORD(a4) = HIDWORD(a2) - result;
  v10 = v9 - a3;
  v21 = HIDWORD(a2) - result;
  v22 = v10;
  v11 = a2;
  v12 = HIDWORD(a4) - HIDWORD(a3);
  if ( HIDWORD(a2) == (_DWORD)result )
  {
    if ( !v10 )
    {
      *a5 = a3;
      goto LABEL_16;
    }
    v13 = HIDWORD(a4) - HIDWORD(a3);
    v14 = HIDWORD(a3) - result;
  }
  else
  {
    if ( v8 )
    {
      v16 = HIDWORD(a3) - result;
      if ( (int)abs32(v8) < (int)abs32(a4) )
      {
        v19 = v8;
        v14 = v6 - a3 + CompDiv(a4, v8 * (__int64)v16);
        v20 = CompDiv(v21, v19 * v12);
        v10 = v22;
        v15 = v22 - v20;
      }
      else
      {
        v17 = (int)a4;
        v14 = v16 - CompDiv(v8, (int)a4 * (__int64)((int)a3 - v6));
        v18 = CompDiv(v25, v17 * v22);
        v10 = v22;
        v15 = v18 - v12;
      }
      goto LABEL_13;
    }
    if ( !v12 )
    {
      *a5 = v6;
      result = HIDWORD(a3);
      goto LABEL_16;
    }
    v13 = v10;
    v14 = a3 - v6;
  }
  v15 = -v13;
LABEL_13:
  if ( (int)abs32(v15) <= 16 )
  {
    *a5 = ((int)a3 + v11) >> 1;
    result = (unsigned int)((v23 + v24) >> 1);
  }
  else
  {
    *a5 = a3 + CompDiv(v15, v14 * (__int64)v10);
    result = HIDWORD(a3) + (unsigned int)CompDiv(v15, v14 * (__int64)v12);
  }
LABEL_16:
  a5[1] = result;
  return result;
}
