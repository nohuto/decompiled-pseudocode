/*
 * XREFs of PepParkPreference @ 0x1C000CF70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 */

__int64 __fastcall PepParkPreference(
        char a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned int v11; // esi
  int v12; // r8d
  __int64 v13; // r13
  unsigned int v14; // r14d
  __int64 v15; // rdx
  char *v16; // rbx
  unsigned int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  unsigned int v20; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v21[3]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v22[4]; // [rsp+50h] [rbp-20h] BYREF

  memset(v21, 0, sizeof(v21));
  memset(v22, 0, sizeof(v22));
  result = (unsigned int)dword_1C0013968;
  if ( dword_1C0013968 < (unsigned int)dword_1C0013414 )
    return result;
  result = KeCountSetBitsAffinityEx(a4);
  v11 = result;
  if ( !(_DWORD)result )
    return result;
  result = a6 ? KeCountSetBitsAffinityEx(a6) : 0LL;
  if ( a3 <= (unsigned int)result || a3 >= v11 )
    return result;
  v12 = v11;
  if ( v11 < 4 )
    v12 = 4;
  memset(PepParkLists, 0, (unsigned int)(16 * v12));
  v13 = 0LL;
  v14 = 0;
  KeInitializeEnumerationContext(v21, a4);
  result = KeEnumerateNextProcessor(&v20, v21);
  if ( (_DWORD)result )
    return result;
  while ( v14 < v11 )
  {
    v15 = v20;
    v16 = &PepParkLists[16 * v14];
    v13 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + v20);
    *(_QWORD *)v16 = *(_QWORD *)(v13 + 1104);
    v16[9] = 0;
    if ( a6 )
    {
      if ( (unsigned int)KeCheckProcessorAffinityEx(a6, v15) )
      {
        v16[8] = 2;
        v17 = a3 - 1;
        if ( !a3 )
          v17 = 0;
        a3 = v17;
        goto LABEL_22;
      }
      v15 = v20;
    }
    v16[8] = a5 && (unsigned int)KeCheckProcessorAffinityEx(a5, v15);
LABEL_22:
    ++v14;
    result = KeEnumerateNextProcessor(&v20, v21);
    if ( (_DWORD)result )
      break;
  }
  if ( v14 && v13 )
  {
    LOBYTE(v22[3]) = a1;
    v22[0] = __PAIR64__(v14, a3);
    v22[2] = a2;
    v22[1] = PepParkLists;
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD *))qword_1C00136B0)(*(_QWORD *)(v13 + 1104), v22);
    if ( (int)result < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return WPP_RECORDER_SF_D(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 3u,
                 2u,
                 0x11u,
                 (__int64)&WPP_b2bd489c9f8f3f4d7c770ae62f3187bb_Traceguids,
                 result);
      return result;
    }
    v18 = 0;
    KeInitializeEnumerationContext(v21, a4);
    while ( 2 )
    {
      result = KeEnumerateNextProcessor(&v20, v21);
      if ( (_DWORD)result || v18 >= v11 )
        return result;
      if ( PepParkLists[16 * v18 + 9] == 1 )
      {
        v19 = a7;
LABEL_34:
        KeAddProcessorAffinityEx(v19, v20);
      }
      else if ( PepParkLists[16 * v18 + 9] == 2 )
      {
        v19 = a8;
        goto LABEL_34;
      }
      ++v18;
      continue;
    }
  }
  return result;
}
