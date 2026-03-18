/*
 * XREFs of Isoch_CalculateBytesTransferred @ 0x1C0028CA4
 * Callers:
 *     Isoch_FindTrbMatch @ 0x1C00297F4 (Isoch_FindTrbMatch.c)
 * Callees:
 *     Isoch_ProcessSegment @ 0x1C002A564 (Isoch_ProcessSegment.c)
 */

__int64 __fastcall Isoch_CalculateBytesTransferred(int a1, __int64 a2, int a3)
{
  _QWORD *v4; // rdi
  _QWORD *v6; // r9
  int v8; // eax
  _QWORD *v9; // rsi
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0;
  v4 = *(_QWORD **)(a2 + 112);
  v6 = *(_QWORD **)(a2 + 96);
  v8 = *(_DWORD *)(a2 + 120);
  if ( v4 != v6 )
  {
    v9 = (_QWORD *)(a2 + 24);
    if ( v4 != (_QWORD *)(a2 + 24) )
    {
      while ( !(unsigned __int8)Isoch_ProcessSegment(a1, a2, a3, (_DWORD)v4, v8, (__int64)&v12, (__int64)&v11) )
      {
        v4 = (_QWORD *)*v4;
        v8 = 0;
        if ( v4 == v9 )
        {
          v6 = *(_QWORD **)(a2 + 96);
          goto LABEL_6;
        }
      }
      goto LABEL_7;
    }
  }
LABEL_6:
  v4 = v6;
  if ( (unsigned __int8)Isoch_ProcessSegment(a1, a2, a3, (_DWORD)v6, v8, (__int64)&v12, (__int64)&v11) )
  {
LABEL_7:
    *(_DWORD *)(a2 + 120) = v12;
    *(_QWORD *)(a2 + 112) = v4;
  }
  return v11;
}
