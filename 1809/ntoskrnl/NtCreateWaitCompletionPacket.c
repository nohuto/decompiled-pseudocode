/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x1406A00F0
 * Callers:
 *     <none>
 * Callees:
 *     EvaluateCurrentState @ 0x1401B3674 (EvaluateCurrentState.c)
 *     ObCreateObjectEx @ 0x1405E05E0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14062D080 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateWaitCompletionPacket(__int64 *a1, unsigned int a2, int a3)
{
  char PreviousMode; // si
  __int64 v7; // r8
  int inserted; // ecx
  _BYTE *v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+58h] [rbp-20h] BYREF
  PVOID Object[2]; // [rsp+60h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               IopWaitCompletionPacketObjectType,
               a3,
               PreviousMode,
               v11,
               112,
               0,
               0,
               Object,
               0LL);
  if ( inserted >= 0 )
  {
    v9 = Object[0];
    *((_QWORD *)Object[0] + 12) = 0LL;
    v9[104] = 0;
    if ( EvaluateCurrentState((_DWORD **)&g_Feature_2410109243_59422653_FeatureDescriptorDetails) )
      v9[105] = 0;
    *((_QWORD *)v9 + 11) = 0LL;
    inserted = ObInsertObjectEx(v9, 0LL, a2, 0, 0, 0LL, (unsigned __int64 *)&v12);
    if ( inserted >= 0 )
      *a1 = v12;
  }
  return (unsigned int)inserted;
}
