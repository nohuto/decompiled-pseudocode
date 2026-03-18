/*
 * XREFs of MiFindUserSidHotPatchContext @ 0x14088E3DC
 * Callers:
 *     MiFindProcessImageHotPatchRecord @ 0x14088E284 (MiFindProcessImageHotPatchRecord.c)
 *     MiQueryLoadedPatches @ 0x14089131C (MiQueryLoadedPatches.c)
 *     MiUnloadHotPatchForUserSid @ 0x140891FDC (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     RtlLengthSid @ 0x140004070 (RtlLengthSid.c)
 *     RtlHashBytes2 @ 0x1401BFAD0 (RtlHashBytes2.c)
 *     MiCompareUserSidHotPatchNodes @ 0x14088DF04 (MiCompareUserSidHotPatchNodes.c)
 */

_QWORD *__fastcall MiFindUserSidHotPatchContext(void *a1)
{
  _QWORD *v1; // rbx
  ULONG v3; // eax
  __int64 v4; // r8
  int v5; // eax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)MiUserSidPatchLists;
  if ( !MiUserSidPatchLists )
    return 0LL;
  v3 = RtlLengthSid(a1);
  v7[0] = RtlHashBytes2((const unsigned __int8 *)a1, v3, v4);
  v7[1] = a1;
  do
  {
    v5 = MiCompareUserSidHotPatchNodes(v7, (__int64)v1);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        break;
      v1 = (_QWORD *)v1[1];
    }
    else
    {
      v1 = (_QWORD *)*v1;
    }
  }
  while ( v1 );
  if ( v1 )
    return v1;
  else
    return 0LL;
}
