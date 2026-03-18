/*
 * XREFs of ACPIGetUniqueId @ 0x1C00AC690
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 */

__int64 __fastcall ACPIGetUniqueId(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v11; // [rsp+22h] [rbp-36h]
  __int64 v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+38h] [rbp-20h]
  void *Src; // [rsp+40h] [rbp-18h]

  *a2 = 0LL;
  v3 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1145656671);
  v4 = (__int64)v3;
  if ( !v3 )
    return 3221226021LL;
  v6 = AMLIEvalNameSpaceObject((unsigned __int64 *)v3, v10, 0, 0LL);
  AMLIDereferenceHandleEx(v4);
  if ( v6 >= 0 )
  {
    if ( v11 == 1 )
    {
      *a2 = v12;
    }
    else if ( v11 == 2 && (unsigned int)(v13 - 1) <= 8 )
    {
      memmove(a2, Src, (unsigned int)(v13 - 1));
    }
    else
    {
      v6 = -1073741811;
    }
    AMLIFreeDataBuffs((__int64)v10, v7, v8, v9);
  }
  return (unsigned int)v6;
}
