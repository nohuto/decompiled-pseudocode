/*
 * XREFs of KseShimDriverIoCallbacks @ 0x140709B34
 * Callers:
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A111C8 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KsepPoolFreeNonPaged @ 0x140153E10 (KsepPoolFreeNonPaged.c)
 *     KsepLogInfo @ 0x14015411C (KsepLogInfo.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KsepDebugPrint @ 0x1402B7054 (KsepDebugPrint.c)
 *     KsepPoolAllocateNonPaged @ 0x1402B72F4 (KsepPoolAllocateNonPaged.c)
 *     KsepDriverPathTail @ 0x140709AD4 (KsepDriverPathTail.c)
 *     KsepGetShimCallbacksForDriver @ 0x140709C64 (KsepGetShimCallbacksForDriver.c)
 *     KsepStringFree @ 0x14070D2C4 (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x14070D2FC (KsepStringDuplicateUnicode.c)
 */

__int64 __fastcall KseShimDriverIoCallbacks(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  int ShimCallbacksForDriver; // edi
  char *NonPaged; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  signed __int64 v17; // r8
  __int64 (__fastcall **v18)(__int64, IRP *); // rcx
  char *v19; // r9
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, IRP *); // rdx
  __int64 (__fastcall *v22)(__int64, IRP *); // r11
  __int64 v23; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+30h] [rbp-D8h]
  UNICODE_STRING v25; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v26[32]; // [rsp+48h] [rbp-C0h] BYREF

  v3 = a1[6];
  memset(v26, 0, sizeof(v26));
  *(_QWORD *)&v25.Length = 0LL;
  ShimCallbacksForDriver = 0;
  v25.Buffer = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( a3 )
  {
    if ( dword_140468424 == 2 && (KseEngine & 1) == 0 )
    {
      ShimCallbacksForDriver = KsepStringDuplicateUnicode(&v23, a3);
      if ( ShimCallbacksForDriver >= 0 )
      {
        ShimCallbacksForDriver = KsepDriverPathTail((unsigned __int16 *)&v23, &v25);
        if ( ShimCallbacksForDriver >= 0 )
        {
          ShimCallbacksForDriver = KsepGetShimCallbacksForDriver(a1[3], v26);
          if ( ShimCallbacksForDriver >= 0 )
          {
            NonPaged = (char *)KsepPoolAllocateNonPaged(0x100uLL);
            if ( NonPaged )
            {
              v9 = a1[11];
              if ( v9 )
              {
                v10 = v26[0];
                if ( v26[0] )
                {
                  *(_QWORD *)NonPaged = v9;
                  a1[11] = v10;
                }
              }
              v11 = a1[12];
              if ( v11 )
              {
                v12 = v26[1];
                if ( v26[1] )
                {
                  *((_QWORD *)NonPaged + 1) = v11;
                  a1[12] = v12;
                }
              }
              v13 = a1[13];
              if ( v13 )
              {
                v14 = v26[2];
                if ( v26[2] )
                {
                  *((_QWORD *)NonPaged + 2) = v13;
                  a1[13] = v14;
                }
              }
              v15 = *(_QWORD *)(v3 + 8);
              if ( v15 )
              {
                v16 = v26[3];
                if ( v26[3] )
                {
                  *((_QWORD *)NonPaged + 3) = v15;
                  *(_QWORD *)(v3 + 8) = v16;
                }
              }
              v17 = NonPaged - (char *)a1;
              v18 = (__int64 (__fastcall **)(__int64, IRP *))(a1 + 14);
              v19 = (char *)((char *)&v26[4] - (char *)a1);
              v20 = 28LL;
              do
              {
                v21 = *v18;
                if ( *v18 )
                {
                  if ( v21 != IopInvalidDeviceRequest )
                  {
                    v22 = *(__int64 (__fastcall **)(__int64, IRP *))((char *)v18 + (_QWORD)v19 - 112);
                    if ( v22 )
                    {
                      *(__int64 (__fastcall **)(__int64, IRP *))((char *)v18 + v17 - 80) = v21;
                      *v18 = v22;
                    }
                  }
                }
                ++v18;
                --v20;
              }
              while ( v20 );
              *(_QWORD *)(v3 + 56) = NonPaged;
              ShimCallbacksForDriver = 0;
              KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 524550LL;
              if ( (KsepDebugFlag & 1) != 0 )
                KsepDebugPrint(9LL, "KSE: Hooked callbacks for driver [%ws].\n", v24, v19, v23);
              KsepLogInfo(9LL, (__int64)"KSE: Hooked callbacks for driver [%ws].\n", v24, v19, v23);
              goto LABEL_8;
            }
            ShimCallbacksForDriver = -1073741801;
          }
        }
      }
      KsepPoolFreeNonPaged(0LL);
    }
LABEL_8:
    KsepStringFree(&v23);
    return (unsigned int)ShimCallbacksForDriver;
  }
  KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 524436LL;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(0LL, "KSE: Callback shimming - missing driver object or driver name.\n");
  KsepLogInfo(0LL, (__int64)"KSE: Callback shimming - missing driver object or driver name.\n");
  return 3221225485LL;
}
