/*
 * XREFs of AslpFileMakeBinVersionAttributes @ 0x140720F74
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x140720710 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall AslpFileMakeBinVersionAttributes(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  _DWORD *result; // rax
  _DWORD *v8; // [rsp+10h] [rbp+10h]

  v2 = 4LL;
  if ( a2 )
  {
    *(_DWORD *)(a1 + 416) = 2;
    *(_QWORD *)(a1 + 424) = 4LL;
    v3 = (unsigned int)a2[11];
    *(_DWORD *)(a1 + 440) |= 1u;
    *(_QWORD *)(a1 + 432) = v3;
    *(_DWORD *)(a1 + 448) = 2;
    *(_QWORD *)(a1 + 456) = 4LL;
    v4 = (unsigned int)a2[12];
    *(_DWORD *)(a1 + 472) |= 1u;
    *(_QWORD *)(a1 + 464) = v4;
    *(_DWORD *)(a1 + 480) = 2;
    *(_QWORD *)(a1 + 488) = 4LL;
    v5 = (unsigned int)a2[8];
    *(_DWORD *)(a1 + 504) |= 1u;
    *(_QWORD *)(a1 + 496) = v5;
    *(_DWORD *)(a1 + 512) = 2;
    *(_QWORD *)(a1 + 520) = 4LL;
    v6 = (unsigned int)a2[9];
    *(_DWORD *)(a1 + 536) |= 1u;
    *(_QWORD *)(a1 + 528) = v6;
    LODWORD(v8) = a2[5];
    LODWORD(v6) = a2[4];
    *(_DWORD *)(a1 + 152) |= 1u;
    HIDWORD(v8) = v6;
    *(_QWORD *)(a1 + 144) = v8;
    *(_DWORD *)(a1 + 128) = 3;
    *(_QWORD *)(a1 + 136) = 8LL;
    LODWORD(v8) = a2[3];
    LODWORD(v6) = a2[2];
    *(_DWORD *)(a1 + 120) |= 1u;
    HIDWORD(v8) = v6;
    result = v8;
    *(_QWORD *)(a1 + 112) = v8;
    *(_DWORD *)(a1 + 96) = 3;
    *(_QWORD *)(a1 + 104) = 8LL;
  }
  else
  {
    result = (_DWORD *)(a1 + 440);
    do
    {
      *result |= 2u;
      result += 8;
      --v2;
    }
    while ( v2 );
    *(_DWORD *)(a1 + 152) |= 2u;
    *(_DWORD *)(a1 + 120) |= 2u;
  }
  return result;
}
