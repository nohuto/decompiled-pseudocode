/*
 * XREFs of ?uncaught_exception@std@@YA_NXZ @ 0x1800AEDDC
 * Callers:
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x18002F2A4 (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x18002FEA0 (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1800432F8 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x180075F60 (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??1sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@XZ @ 0x1800761F0 (--1sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@XZ.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x180076968 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@_W@Z @ 0x180099E58 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@_W@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool std::uncaught_exception(void)
{
  return __uncaught_exception();
}
