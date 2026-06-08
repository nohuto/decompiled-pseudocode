/*
 * XREFs of PepParkMask @ 0x1C000D210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 */

__int64 __fastcall PepParkMask(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h]
  _BYTE *v10; // [rsp+40h] [rbp-20h]
  _QWORD v11[3]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+A0h] [rbp+40h] BYREF

  result = 0LL;
  memset(v11, 0, sizeof(v11));
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( !PepSkipParkNotification )
  {
    result = (unsigned int)dword_1C0013968;
    if ( dword_1C0013968 >= (unsigned int)dword_1C0013414 )
    {
      memset(PepParkLists, 0, (unsigned int)(16 * dword_1C0013414));
      v5 = 0;
      KeInitializeEnumerationContext(v11, &unk_1C0013730);
      result = KeEnumerateNextProcessor(&v12, v11);
      if ( !(_DWORD)result )
      {
        do
        {
          v6 = v12;
          v7 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + v12);
          *(_QWORD *)&PepParkLists[16 * v5] = *(_QWORD *)(v7 + 1104);
          PepParkLists[16 * v5++ + 8] = KeCheckProcessorAffinityEx(a2, v6);
          result = KeEnumerateNextProcessor(&v12, v11);
        }
        while ( !(_DWORD)result );
        if ( v5 )
        {
          v9 = a1;
          LODWORD(v8) = v5;
          v10 = PepParkLists;
          result = ((__int64 (__fastcall *)(_QWORD, __int64 *))qword_1C00136B8)(*(_QWORD *)(v7 + 1104), &v8);
          if ( (int)result < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              result = WPP_RECORDER_SF_D(
                         (__int64)WPP_GLOBAL_Control->DeviceExtension,
                         4u,
                         2u,
                         0x12u,
                         (__int64)&WPP_b2bd489c9f8f3f4d7c770ae62f3187bb_Traceguids,
                         result);
            PepSkipParkNotification = 1;
          }
        }
      }
    }
  }
  return result;
}
