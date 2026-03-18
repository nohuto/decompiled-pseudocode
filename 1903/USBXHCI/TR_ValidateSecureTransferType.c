/*
 * XREFs of TR_ValidateSecureTransferType @ 0x1C0003E60
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C002FE68 (Isoch_RetrieveNextStage.c)
 *     Bulk_RetrieveNextStage @ 0x1C0036038 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDi @ 0x1C000415C (WPP_RECORDER_SF_DDi.c)
 */

__int64 __fastcall TR_ValidateSecureTransferType(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  unsigned __int16 v5; // cx
  char v6; // r10
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // edx
  char v13; // [rsp+38h] [rbp-10h]

  v4 = 0;
  v5 = *(_WORD *)(a2 + 2);
  v6 = a2;
  if ( v5 >= 0x39u && v5 <= 0x3Au )
  {
    if ( *(_BYTE *)(a1 + 280) )
    {
      v8 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(v8 + 672) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = *(_QWORD *)(a1 + 56);
        v10 = *(unsigned __int8 *)(v8 + 135);
        v11 = *(_DWORD *)(v9 + 144);
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_DDi(
          *(_QWORD *)(v9 + 80),
          v11,
          v10,
          32,
          (__int64)&WPP_36bc79e2af6f37d6aa20da6265b51b29_Traceguids,
          v10,
          *(_DWORD *)(v9 + 144),
          v6);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = a2;
        v7 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_DDi(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v7,
          a3,
          30,
          (__int64)&WPP_36bc79e2af6f37d6aa20da6265b51b29_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v13);
      }
      return (unsigned int)-1073741811;
    }
  }
  return v4;
}
