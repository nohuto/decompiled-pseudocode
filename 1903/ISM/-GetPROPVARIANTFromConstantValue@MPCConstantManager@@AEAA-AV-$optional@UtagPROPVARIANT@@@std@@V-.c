/*
 * XREFs of ?GetPROPVARIANTFromConstantValue@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@V?$variant@K_NM@3@@Z @ 0x18008A240
 * Callers:
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x180089054 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@PEBGV-$variant@K_NM@std@@@Z.c)
 *     ?GetPROPVARIANT@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@W4InputType@@PEBG@Z @ 0x18008A068 (-GetPROPVARIANT@MPCConstantManager@@AEAA-AV-$optional@UtagPROPVARIANT@@@std@@W4InputType@@PEBG@Z.c)
 *     ?OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z @ 0x18008A3A0 (-OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 */

_BYTE *__fastcall MPCConstantManager::GetPROPVARIANTFromConstantValue(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int128 v4; // xmm0
  __int64 v5; // xmm1_8
  __int128 pExceptionObject; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-10h]

  if ( !BYTE4(a3) )
  {
    LOWORD(pExceptionObject) = 21;
    *((_QWORD *)&pExceptionObject + 1) = (unsigned int)a3;
LABEL_14:
    v4 = pExceptionObject;
    a2[24] = 1;
    v5 = v8;
    *(_OWORD *)a2 = v4;
    *((_QWORD *)a2 + 2) = v5;
    return a2;
  }
  if ( SBYTE4(a3) == 1LL )
  {
    if ( BYTE4(a3) != 1 )
    {
      *((_QWORD *)&pExceptionObject + 1) = 0LL;
      v8 = 0LL;
      *(_QWORD *)&pExceptionObject = &std::bad_variant_access::`vftable';
      throw (std::bad_variant_access *)&pExceptionObject;
    }
    LOWORD(pExceptionObject) = 11;
    if ( (_BYTE)a3 )
      WORD4(pExceptionObject) = -1;
    else
      WORD4(pExceptionObject) = 0;
    goto LABEL_14;
  }
  if ( SBYTE4(a3) == 2LL )
  {
    if ( BYTE4(a3) != 2 )
    {
      *((_QWORD *)&pExceptionObject + 1) = 0LL;
      v8 = 0LL;
      *(_QWORD *)&pExceptionObject = &std::bad_variant_access::`vftable';
      throw (std::bad_variant_access *)&pExceptionObject;
    }
    LOWORD(pExceptionObject) = 5;
    *((double *)&pExceptionObject + 1) = *(float *)&a3;
    goto LABEL_14;
  }
  memset_0(a2, 0, 0x20uLL);
  return a2;
}
