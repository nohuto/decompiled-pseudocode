/*
 * XREFs of PepParkMask @ 0x1C0009A10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 */

void __fastcall PepParkMask(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r14
  int v7; // eax
  int v8; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+38h] [rbp-40h]
  _BYTE *v10; // [rsp+40h] [rbp-38h]
  _BYTE v11[24]; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v12; // [rsp+90h] [rbp+18h] BYREF

  if ( !PepSkipParkNotification && dword_1C0011928 >= (unsigned int)dword_1C00113E4 )
  {
    memset(PepParkLists, 0, (unsigned int)(16 * dword_1C00113E4));
    v4 = 0;
    KeInitializeEnumerationContext(v11, &unk_1C00116F0);
    if ( !(unsigned int)KeEnumerateNextProcessor(&v12, v11) )
    {
      do
      {
        v5 = v12;
        v6 = *(_QWORD *)(DevExts + 8LL * v12);
        *(_QWORD *)&PepParkLists[16 * v4] = *(_QWORD *)(v6 + 1088);
        PepParkLists[16 * v4++ + 8] = KeCheckProcessorAffinityEx(a2, v5);
      }
      while ( !(unsigned int)KeEnumerateNextProcessor(&v12, v11) );
      if ( v4 )
      {
        v9 = a1;
        v8 = v4;
        v10 = PepParkLists;
        v7 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0011678)(*(_QWORD *)(v6 + 1088), &v8);
        if ( v7 < 0 )
        {
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0x12u,
            (__int64)&WPP_b2bd489c9f8f3f4d7c770ae62f3187bb_Traceguids,
            v7);
          PepSkipParkNotification = 1;
        }
      }
    }
  }
}
