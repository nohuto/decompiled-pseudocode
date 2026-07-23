/*
 * XREFs of AslpFileGetNtHeaderAttributes @ 0x1408EE4C8
 * Callers:
 *     AslpFileGetHeaderAttributesPE @ 0x1408EE1E0 (AslpFileGetHeaderAttributesPE.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x1408EE3EC (AslpFileGetImageNtHeader.c)
 */

__int64 __fastcall AslpFileGetNtHeaderAttributes(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7,
        __int64 a8)
{
  int ImageNtHeader; // ebx
  __int64 v13; // r8
  __int16 v14; // dx
  _QWORD v16[4]; // [rsp+38h] [rbp-20h] BYREF

  ImageNtHeader = AslpFileGetImageNtHeader(v16, a8);
  if ( ImageNtHeader >= 0 )
  {
    v13 = v16[0];
    *a2 = (unsigned __int8)*(_WORD *)(v16[0] + 70LL) + ((unsigned __int8)*(_WORD *)(v16[0] + 68LL) << 16);
    *a3 = *(_DWORD *)(v13 + 8);
    v14 = *(_WORD *)(v13 + 24);
    *a7 = v14;
    *a5 = *(_WORD *)(v13 + 4);
    if ( v14 == 267 || v14 == 523 )
    {
      *a1 = *(_DWORD *)(v13 + 88);
      *a4 = *(_DWORD *)(v13 + 80);
      *a6 = *(_WORD *)(v13 + 92);
      return 0;
    }
    else
    {
      *a1 = 0;
      *a4 = 0;
      *a6 = 0;
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)ImageNtHeader;
}
