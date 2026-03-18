/*
 * XREFs of ACPIGetUniqueId @ 0x1C00AFDA0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIGetUniqueId(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  volatile signed __int32 *v5; // rsi
  int v7; // ebx
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v8, 0, 0x28uLL);
  *a2 = 0LL;
  v4 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1145656671);
  v5 = (volatile signed __int32 *)v4;
  if ( !v4 )
    return 3221226021LL;
  v7 = AMLIEvalNameSpaceObject(v4, v8, 0, 0LL);
  AMLIDereferenceHandleEx(v5);
  if ( v7 >= 0 )
  {
    if ( WORD1(v8[0]) == 1 )
    {
      *a2 = v8[2];
    }
    else if ( WORD1(v8[0]) == 2 && (unsigned int)(LODWORD(v8[3]) - 1) <= 8 )
    {
      memmove(a2, (const void *)v8[4], (unsigned int)(LODWORD(v8[3]) - 1));
    }
    else
    {
      v7 = -1073741811;
    }
    AMLIFreeDataBuffs(v8);
  }
  return (unsigned int)v7;
}
